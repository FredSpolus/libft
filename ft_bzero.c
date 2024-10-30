/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:53:25 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:53:26 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It should turn all bytes in the provided string into 0 up, using the size_t n
// privided as a limiter.
// attention on the string type, unsigned char, this will prevent overflow.
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*string;

	string = (unsigned char *)s;
	while (n >= 1)
	{
		*string = 0;
		n--;
		string++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[10];
// 	ft_bzero(test, 10);
// 	printf("result : %s", test);
// 	return (0);
// }
