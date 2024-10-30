/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:10 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:45:54 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function copies up to size - 1 characters from the NUL-terminated string
// src to dst, NUL-terminating the result
// returns the length of src
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	if (dstsize == 0)
	{
		while (src[count])
			count++;
		return (count);
	}
	while (count < (dstsize - 1) && src[count])
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	while (src[count])
		count++;
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	source[] = "copy this to dest";
// 	char	dest[] = "destination string to receive other strings";
// 	size_t size = 18;
// 	size_t out_size = ft_strlcpy(dest, source, size);
// 	printf("size return: %zu  - dest : %s", out_size, dest);
// 	return (0);
// }
