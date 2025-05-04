size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	ssize;

	ssize = 0;
	while (src[ssize] != '\0')
		ssize++;
	if (dsize == 0)
		return (ssize);
	i = 0;
	while (src[i] != '\0' && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ssize);
}
