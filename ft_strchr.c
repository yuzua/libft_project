char	*ft_strchr(const char *s, int c)
{
	int	i;
	const char	c_char = (char)c;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c_char)
			return ((char *)s + i);
		i++;
	}
	if (c_char == '\0')
		return ((char *)s + i);
	return (NULL);
}
