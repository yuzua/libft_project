// static	partition_c()

#include <stdbool.h>

char	**ft_split(char const *s, char c)
{
	size_t	partition_count;
	size_t	partition_i;
	char	**partition_ptr;
	size_t	partition_start_i;
	size_t	partition_end_i;
	size_t	freed_partition_i;
	
	partition_count = get_partition_count(s, c);
	partition_ptr = (char **)malloc(sizeof(char *) * (partition_count + 1));
	partition_start_i = 0;
	partition_end_i = 0;
	partition_i = 0;
	while (partition_i < partition_count - 1)
	{
		partition_end_i = get_partition_end_index(partition_end_i, s, c);
		if (!partition(&partition_ptr[partition_i],  &s[partition_start_i], partition_end_i))
		{
			freed_partition_i = 0;
			while (freed_partition_i <= partition_i){
				free(partition_ptr[freed_partition_i]);
				freed_partition_i++;
			}
			free(partition_ptr);
			break;
		}
		partition_i++;
		partition_end_i++;
		partition_start_i = partition_end_i;
	}
	partition_ptr[partition_count] = NULL;
	return (partition_ptr);
}

static size_t	get_partition_count(char const *s, char c)
{
	size_t	s_i;
	size_t	partition_count;

	partition_count = 0;
	s_i = 0;
	while (s[s_i] != '\0')
	{
		if (s[s_i] == c)
			partition_count++;
		s_i++;
	}
	return (partition_count + 1);
}

static int	get_partition_end_index(int partition_end_i, char const *s, char c)
{
	while (s[partition_end_i] != '\0' && s[partition_end_i] != c)
		partition_end_i++;
	return (partition_end_i);
}

static bool	partition(char **partition_ptr, char const *s, int partition_end_i)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (&s[partition_end_i] - &s[0] + 1));
	if (!ptr)
		return (false);
	ft_strlcpy(ptr, s, partition_end_i + 1);
	*partition_ptr = ptr;
	return (true);
}

/*
	[仕様]
	①区切り文字で分割
	②返却値は2次元配列
	③配列確保ができなかった場合解放する

	[やること]
	〇①区切り文字で配列を分割する際の長さ判定
	〇②ftライブラリを使用して長さを複製

	"abcdefgchijkcl"
	"c"
	-> ["abc", "defgc", "hijkc", "l"]
*/ 
