void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_char;
	const unsigned char	*src_char = (unsigned char *)src;

	dest_char = (unsigned char *)dest;
	if ((dest_char == NULL || src_char == NULL) && n == 0)
		return (dest);
	else if (dest_char == NULL || src_char == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}
