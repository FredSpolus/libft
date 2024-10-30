/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:36 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:54:37 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//! check the memory positions, if destination comes after the source
//! start copying the values from the end of both strings.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s_dst;
	unsigned char	*s_src;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (s_dst < s_src)
	{
		while (len >= 1)
		{
			*s_dst++ = *s_src++;
			len--;
		}
	}
	else if (s_dst > s_src)
	{
		s_dst += len - 1;
		s_src += len - 1;
		while (len >= 1)
		{
			*s_dst-- = *s_src--;
			len--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	source[] = "copy this";
// 	char	destination[] = "to this array";
// 	ft_memmove(destination, source, 4);
// 	printf("%s", destination);
// 	return (0);
// }
