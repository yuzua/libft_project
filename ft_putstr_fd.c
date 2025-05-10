void	ft_putstr_fd(char *s, int fd)
{
	size_t	s_i;

	if (s == NULL)
		return ;
	s_i = 0;
	while (s[s_i] != '\0')
	{
		write(fd, &s[s_i], 1);
		s_i++;
	}
}
