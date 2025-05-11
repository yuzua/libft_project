#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_char = (unsigned char *)s;
	const unsigned char	c_char = (unsigned char)c;

	i = 0;
	while (i < n)
	{
		if (s_char[i] == c_char)
			return ((void *)s_char + i);
		i++;
	}
	return (NULL);
}
