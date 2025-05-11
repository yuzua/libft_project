#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*s_char;
	const unsigned char	c_char = (unsigned char)c;

	if (s == NULL)
		return (s);
	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_char[i] = c_char;
		i++;
	}
	return (s);
}
