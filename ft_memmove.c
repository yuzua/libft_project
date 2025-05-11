/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeita <skeita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:11:53 by skeita            #+#    #+#             */
/*   Updated: 2025/05/11 16:57:10 by skeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_forward(
	unsigned char *dest, const unsigned char *src, size_t n
	)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	copy_backward(
	unsigned char *dest, const unsigned char *src, size_t n
	)
{
	size_t	i;

	if (n == 0)
		return ;
	i = n - 1;
	while (true)
	{
		dest[i] = src[i];
		if (i == 0)
			break ;
		i--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char = (unsigned char *)src;

	dest_char = (unsigned char *)dest;
	if (dest_char > src_char)
		copy_backward(dest_char, src_char, n);
	else
		copy_forward(dest_char, src_char, n);
	return (dest);
}
