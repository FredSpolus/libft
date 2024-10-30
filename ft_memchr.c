/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:25 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:28:13 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// scan memory for a character
// returns a pointer to the found char or NULL of nothing was found
void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*un_s;
	unsigned char	un_c;
	size_t			index;

	un_c = (unsigned char)c;
	un_s = (char *)s;
	index = 0;
	while (index < n)
	{
		if ((unsigned char)un_s[index] == un_c)
			return ((void *)s + index);
		index++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "find here";
// 	char	test2[] = "find here";

// 	char	*res = (char *)ft_memchr(test, 'n', 5);
// 	char	*res2 = (char *)memchr(test2, 'n', 5);
// 	printf("result : %s\n", res);
// 	printf("result2 : %s\n", res2);

// 	printf("\n");

// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	char s2[] = {0, 1, 2 ,3 ,4 ,5};
// 	char	*res3 = (char *)ft_memchr(s, 2, 5);
// 	char	*res4 = (char *)memchr(s2, 2, 5);
// 	printf("result3 : %s\n", res3);
// 	printf("result4 : %s\n", res4);
// 	return (0);
// }
