#include "libft.h"

static int	get_n_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	n_len;
	long	n_long;

	n_len = get_n_len(n);
	ptr = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!ptr)
		return (NULL);
	ptr[n_len] = '\0';
	n_long = (long)n;
	if (n_long < 0)
	{
		ptr[0] = '-';
		n_long *= -1;
	}
	else if (n_long == 0)
		ptr[0] = '0';
	while (n_long > 0)
	{
		n_len--;
		ptr[n_len] = (n_long % 10) + '0';
		n_long /= 10;
	}
	return (ptr);
}

// char	*ft_itoa(int n)
// {
// 	size_t	n_len;
// 	size_t	ptr_start_i;
// 	char	*ptr;

// 	// NOTE:文字数の計測
// 	n_len = 0;
// 	while (n[n_len] != '\0')
// 		n_len++;
// 	ptr = (char *)malloc(sizeof(char) * n_len + 1);
// 	if (!ptr)
// 		return (NULL);
// 	// NOTE:先頭が負数の時の考慮
// 	ptr_start_i = 0;
// 	if n < 0:
// 		if n == INT_MIN;
// 			pass
// 		ptr[0] = '-'; 
// 		n *= -1;
// 		ptr_start_i++;
// 	return (ptr);
// }