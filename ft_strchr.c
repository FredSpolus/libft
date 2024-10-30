/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:56 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:38:16 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locate character in string
// returns a pointer to the matched or NULL if not found
char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;

	character = c;
	while (*s)
	{
		if (*s == character)
			return ((char *)s);
		s++;
	}
	if (character == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "look for a in here";
// 	printf("result : %s", ft_strchr(test, 'a'));
// 	return (0);
// }
