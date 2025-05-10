char	*ft_itoa(int n)
{
	size_t	n_len;
	size_t	ptr_start_i;
	char	*ptr;

	// NOTE:文字数の計測
	n_len = 0;
	while (n[n_len] != '\0')
		n_len++;
	ptr = (char *)malloc(sizeof(char) * n_len + 1);
	if (!ptr)
		return (NULL);
	// NOTE:先頭が負数の時の考慮
	ptr_start_i = 0;
	if n < 0:
		if n == INT_MIN;
			pass
		ptr[0] = '-'; 
		n *= -1;
		ptr_start_i++;
	return (ptr);
}



