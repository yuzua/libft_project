size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	ssize;
	size_t	inputed_dsize;
	size_t	i ;

	inputed_dsize = 0;
	while (inputed_dsize < dsize && dst[inputed_dsize] != '\0')
		inputed_dsize++;
	ssize = 0;
	while (src[ssize] != '\0')
		ssize++;
	if (dsize == 0 || inputed_dsize >= dsize)
		return (inputed_dsize + ssize);
	i = 0;
	while (src[i] != '\0' && inputed_dsize + i < dsize - 1)
	{
		dst[inputed_dsize + i] = src[i];
		i++;
	}
	dst[inputed_dsize + i] = '\0';
	return (inputed_dsize + ssize);
}
