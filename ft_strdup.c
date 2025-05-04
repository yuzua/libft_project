#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		ssize;
	int		i;

	ssize = 0;
	while (s[ssize] != '\0')
		ssize++;
	ptr = (char *)malloc(sizeof(char) * (ssize + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, ssize);
	ptr[ssize] = '\0';
	return (ptr);
}
