#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	s_i;

	if (s == NULL || f == NULL)
		return ;
	s_i = 0;
	while (s[s_i] != '\0')
	{
		f((unsigned int)s_i, &s[s_i]);
		s_i++;
	}
}
