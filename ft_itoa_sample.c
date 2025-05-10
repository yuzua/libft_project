#include <stdlib.h>

static int	get_n_len(int n)
""" 桁数の計算 """
{
	int	len;

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
	int		n_len;
	long	n_copy;

	n_len = get_n_len(n);
	ptr = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!ptr)
		return (NULL);
	ptr[n_len] = '\0';
	n_copy = (long)n;
	if (n_copy < 0)
	{
		ptr[0] = '-';
		n_copy = -n_copy;
	}
	else if (n_copy == 0)
		ptr[0] = '0';
	while (n_copy > 0)
	{
		n_len--;
		ptr[--n_len] = (n_copy % 10) + '0';
		n_copy /= 10;
	}
	return (ptr);
}
