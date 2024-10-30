/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:42 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:34:52 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fill memory with a constant byte
// returns a pointer to the memory area b
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)b;
	while (len >= 1)
	{
		*string = (unsigned char)c;
		len--;
		string++;
	}
	return (b);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[4];
// 	ft_memset(dest, 52, 4);
// 	printf("%s", dest);
// 	return (0);
// }
