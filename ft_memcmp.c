#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_char = (unsigned char *)s1;
	const unsigned char	*s2_char = (unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (s1_char[i] != s2_char[i])
			return ((int)(s1_char[i] - s2_char[i]));
		i++;
	}
	return (0);
}
