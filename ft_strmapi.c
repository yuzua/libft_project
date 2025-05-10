char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*ptr;
	size_t	s_i;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!ptr)
		return (NULL);
	ptr[s_len] = '\0';
	s_i = 0;
	while (s[s_i] != '\0')
	{
		ptr[s_i] = f((unsigned int)s_i, s[s_i]);
		s_i++;
	}
	return (ptr);
}
