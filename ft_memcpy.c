/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:33 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:32:01 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copy memory area (they should not overlap)
// returns a pointer to dst
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s_dest;
	unsigned char	*s_src;

	s_dest = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n >= 1)
	{
		*s_dest = *s_src;
		n--;
		s_dest++;
		s_src++;
	}
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test_source[] = "copy this";
// 	char	test_dest[22];
// 	ft_memcpy(test_dest, test_source, 4);
// 	printf("%s", test_dest);
// 	return (0);
// }
