char	*ft_strrchr(const char *s, int c)
{
	unsigned int		s_len;
	const unsigned char	c_char = (unsigned char)c;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == c_char)
			return ((char *)(s + s_len));
		s_len--;
	}
	return (NULL);
}
