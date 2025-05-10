char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	size_t	total_size;
	char	*ptr;

	s1_size = 0;
	while (s1 && s1[s1_size] != '\0')
		s1_size++;
	s2_size = 0;
	while (s2 && s2[s2_size] != '\0')
		s2_size++;
	total_size = s1_size + s2_size;
	ptr = (char *)malloc(sizeof(char) * (total_size + 1));
	if (!ptr)
		return (NULL);
	if (s1_size >= 1)
		ft_memcpy(ptr, s1, s1_size);
	if (s2_size >= 1)
		ft_strlcpy(ptr + s1_size, s2, s2_size + 1);
	else
		ptr[s1_size] = '\0';
	return (ptr);
}
