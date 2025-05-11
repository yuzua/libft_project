/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeita <skeita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:11:56 by skeita            #+#    #+#             */
/*   Updated: 2025/05/11 16:40:10 by skeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*s_char;
	const unsigned char	c_char = (unsigned char)c;

	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_char[i] = c_char;
		i++;
	}
	return (s);
}
