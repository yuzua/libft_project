/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skeita <skeita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:13:04 by skeita            #+#    #+#             */
/*   Updated: 2025/05/11 16:39:43 by skeita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					s_len;
	const unsigned char	c_char = (unsigned char)c;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == c_char)
			return ((char *)(s + s_len));
		s_len--;
	}
	return (NULL);
}
