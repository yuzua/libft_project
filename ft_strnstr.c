# TODO:これ行数が多い
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_size;
	size_t	big_i;
	size_t	match_i;

	little_size = 0;
	while (little[little_size] != '\0')
		little_size++;
	if (little_size == 0)
		return (big);
	if (len == 0 || little_size > len)
		return (NULL);
	big_i = 0;
	while (big_i < len && big[big_i] != '\0')
	{
		match_i = 0;
		while (
			big_i + match_i < len
			&& big[big_i + match_i] == little[match_i]
			&& little[match_i] != '\0'
		)
			match_i++;
		if (little[match_i] == '\0')
			return (big + big_i);
		big_i++;
	}
	return (NULL);
}
