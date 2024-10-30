/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:08 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:45:58 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size bounded string copy and concatenation
// appends the NUL-terminated string src to the end of dst. It will append
// at most size - strlen(dst) - 1 bytes, NUL-terminating the result
// return the initial length of dst plus the length of src
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	dstlen;
	size_t	srclen;

	count = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstlen < dstsize)
	{
		while (((count + dstlen) < (dstsize - 1)) && *src)
		{
			dst[dstlen + count] = *src;
			count++;
			src++;
		}
		if (count + dstlen < dstsize)
			dst[dstlen + count] = '\0';
	}
	else if (dstlen > dstsize)
		return (srclen + dstsize);
	return (dstlen + srclen);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	destination[30] = "000000000000000000000000000000";
// 	char	source[] = "AAAAAAAAA";

// 	size_t i = ft_strlcat(destination, source, 6);
// 	printf("%s\n", destination);
// 	printf("%zu\n", i);
// 	return(0);
// }
