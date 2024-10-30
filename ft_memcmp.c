/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:30 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:30:06 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compare memory areas
// return 0 if equal, positive if s1 is greater, negative value if less
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*c_s1;
	char	*c_s2;

	i = 0;
	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	while (i < n)
	{
		if ((unsigned char)c_s1[i] != (unsigned char)c_s2[i])
			return ((unsigned char)c_s1[i] - (unsigned char)c_s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = {0,1,2,3,4,5};
// 	char	test2[] = {0,2,2,3,4,5};
// 	// char	test[] ="compare";
// 	// char	test2[] = "copare";
// 	size_t	result = ft_memcmp(test, test2, 6);
// 	printf("result : %zu\n", result);

// 	// char	test3[] = {0,1,2,3,4,5};
// 	// char	test4[] = {0,2,2,3,5,5};
// 	size_t	result2 = memcmp(test, test2, 6);
// 	printf("result : %zu\n", result2);
// }
