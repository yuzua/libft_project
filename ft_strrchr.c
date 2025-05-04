char	*ft_strrchr(const char *s, int c)
{
	int	ssize;

	ssize = 0;
	while (s[ssize] != '\0')
		ssize++;
	while (ssize >= 0)
	{
		if (s[ssize] == c)
			return (s + ssize);
		ssize--;
	}
	return (NULL);
}
