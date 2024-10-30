/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:23 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:56:59 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates character in string
// returns a pointer to the last occurence of the character c in the string s
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	character;
	const char		*s_begin;

	character = c;
	s_begin = s;
	while (*s)
		s++;
	if (character == '\0')
		return ((char *)s);
	while (s >= s_begin)
	{
		if (*s == character)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
