/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:05 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:55:06 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// joins the two strings provided as a new one
// i use the function ft_strlen to detect the length of both strings,
// use the results plus one to allocate memory for the return string.
// i use the pointers to iterate though the values and assign the values
// to the new string, using the null to get the end of each string.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		total_len;
	int		i;

	i = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (total_len + 1));
	if (joined == NULL)
		return (NULL);
	while (*s1)
	{
		joined[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		joined[i] = *s2;
		s2++;
		i++;
	}
	joined[i] = '\0';
	return (joined);
}

// #include <stdio.h>
// int	main()
// {
// 	char const string1[] = "join ";
// 	char const string2[] = "this";
// 	char *joined_string = ft_strjoin(string1, string2);

// 	// printf("%d", ft_strjoin(string1,string2));
// 	printf("joined: %s\n", joined_string);
// 	free(joined_string);
// 	return (0);
// }
