/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:59 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:39:45 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// duplicae a string
// return a pointer to the duplicated string
// NULL if insufficient memory was available
char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	cpy = malloc(sizeof(char) * len + 1);
	if (!cpy)
		return (NULL);
	while (*s1)
	{
		*cpy = *s1;
		s1++;
		cpy++;
	}
	*cpy = *s1;
	return (cpy - len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	source[] = "copy this to char pointer";
// 	char	*destination = ft_strdup(source);
// 	printf("%s\n", destination);
// 	free(destination);
// 	return (0);
// }
