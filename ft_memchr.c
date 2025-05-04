void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		ssize;

	if (c == '\0')
	{
		ssize = 0;
		while (s[ssize] != '\0')
			ssize++;
		return (s + ssize);
	}
	i = 0;
	while (i < n && s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
