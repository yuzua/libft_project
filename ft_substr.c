char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	start_size_t;	
	size_t	len_to_null_termination;	
	char	*ptr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start || len == 0)
		return (NULL);
	start_size_t = start;
	len_to_null_termination = s_len - start_size_t;
	if (len_to_null_termination > len)
		len_to_null_termination = len;
	ptr = (char *)malloc(sizeof(char) * (len_to_null_termination + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start_size_t, len_to_null_termination + 1);
	return (ptr);
}
