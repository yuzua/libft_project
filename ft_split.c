#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_result(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			result[i] = allocate_word(s, c);
			if (!result[i++])
				return (free_result(result, i - 1), i += 1, NULL);
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

// char	**ft_split(char const *s, char c)
// {
// 	size_t	partition_count;
// 	size_t	partition_i;
// 	char	**partition_ptr;
// 	size_t	partition_start_i;
// 	size_t	partition_end_i;
// 	size_t	freed_partition_i;
// 	partition_count = get_partition_count(s, c);
// 	partition_ptr = (char **)malloc(sizeof(char *) * (partition_count + 1));
// 	partition_start_i = 0;
// 	partition_end_i = 0;
// 	partition_i = 0;
// 	while (partition_i < partition_count - 1)
// 	{
// 		partition_end_i = get_partition_end_index(partition_end_i, s, c);
// 		if (
		// 	!partition(&partition_ptr[partition_i],
		// 	&s[partition_start_i],
		// 	partition_end_i)
		// )
// 		{
// 			freed_partition_i = 0;
// 			while (freed_partition_i <= partition_i){
// 				free(partition_ptr[freed_partition_i]);
// 				freed_partition_i++;
// 			}
// 			free(partition_ptr);
// 			break;
// 		}
// 		partition_i++;
// 		partition_end_i++;
// 		partition_start_i = partition_end_i;
// 	}
// 	partition_ptr[partition_count] = NULL;
// 	return (partition_ptr);
// }

// static size_t	get_partition_count(char const *s, char c)
// {
// 	size_t	s_i;
// 	size_t	partition_count;

// 	partition_count = 0;
// 	s_i = 0;
// 	while (s[s_i] != '\0')
// 	{
// 		if (s[s_i] == c)
// 			partition_count++;
// 		s_i++;
// 	}
// 	return (partition_count + 1);
// }

// static int	get_partition_end_index
	// (
	// 	int partition_end_i,
	// 	char const *s,
	// 	char c
	// )
// {
// 	while (s[partition_end_i] != '\0' && s[partition_end_i] != c)
// 		partition_end_i++;
// 	return (partition_end_i);
// }

// static bool	partition
	// (
	// 	char **partition_ptr,
	// 	char const *s,
	// 	int partition_end_i
	// )
// {
// 	char	*ptr;

// 	ptr = (char *)malloc(sizeof(char) * (&s[partition_end_i] - &s[0] + 1));
// 	if (!ptr)
// 		return (false);
// 	ft_strlcpy(ptr, s, partition_end_i + 1);
// 	*partition_ptr = ptr;
// 	return (true);
// }