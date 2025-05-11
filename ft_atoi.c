#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;
	int	nptr_i;

	nptr_i = 0;
	while (
		nptr[nptr_i] == ' '
		|| ('\t' <= nptr[nptr_i] && nptr[nptr_i] <= '\r')
	)
		nptr_i++;
	sign = 1;
	if (nptr[nptr_i] == '-' || nptr[nptr_i] == '+')
	{
		if (nptr[nptr_i] == '-')
			sign *= -1;
		nptr_i++;
	}
	result = 0;
	while ('0' <= nptr[nptr_i] && nptr[nptr_i] <= '9')
	{
		result = (result * 10) + (nptr[nptr_i] - '0');
		nptr_i++;
	}
	return (result * sign);
}
