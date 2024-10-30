/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:16 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:49:36 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// iterate the function f on each character of s and creates a new
// string with the results
// returns the string created or NULL if failed
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

// #include <stdio.h>

// char	ft_each_char_test(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int	main(void)
// {
// 	char	test[] = "abc";
// 	char	*res = ft_strmapi(test, &ft_each_char_test);

// 	printf("%s", res);
// 	return (0);
// }
