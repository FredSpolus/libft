/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:18 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:51:41 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compares two strings up to n bytes of s1 and s2
// returns 0 if equals, a positive value if s1 is greater and
// negative value if s1 is less than s2
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	un_s1;
	unsigned char	un_s2;

	while ((*s1 || *s2) && n >= 1)
	{
		un_s1 = (unsigned char)*s1;
		un_s2 = (unsigned char)*s2;
		if (un_s1 - un_s2 == 0)
		{
			s1++;
			s2++;
			n--;
		}
		else
		{
			return (un_s1 - un_s2);
		}
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "Tripouille";
// 	char	test2[] = "TripouilleX";
// 	printf("result : %d", ft_strncmp(test, test2, 42));
// 	return (0);
// }
