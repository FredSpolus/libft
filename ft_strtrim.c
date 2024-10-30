/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:27 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:59:52 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// removes the characters on set from the beginning and end of s1
// returns a new string with the result
static int	find_matches(char const *s1, char const *set, int start_i)
{
	int	no_match_i;
	int	set_i;

	no_match_i = start_i;
	while (s1[no_match_i])
	{
		set_i = 0;
		while (s1[no_match_i] != set[set_i] && set[set_i])
			set_i++;
		if (s1[no_match_i] == set[set_i] && set[set_i])
		{
			if (start_i == 0)
				no_match_i++;
			else if (start_i > 0)
				no_match_i--;
		}
		if (!set[set_i])
			return (no_match_i);
	}
	return (no_match_i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i1;
	int		i2;
	int		s1_len;
	char	*result;

	i1 = 0;
	i2 = 0;
	s1_len = ft_strlen(s1);
	i1 = find_matches(s1, set, 0);
	s1_len = find_matches(s1, set, s1_len - 1);
	if (i1 <= s1_len)
		result = (char *)malloc(sizeof(char) * (s1_len - i1) + 2);
	else
		result = (char *)malloc(sizeof(char) * 1);
	if (!result)
		return (NULL);
	while (i1 <= s1_len)
	{
		result[i2] = s1[i1];
		i1++;
		i2++;
	}
	result[i2] = '\0';
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	// char	string[] = "./this part from this string and this./";
// 	// char	to_remove[] = "./";
// 	char	string[] = "   xxx   xxx";
// 	char	to_remove[] = " x";

// 	printf("%s" , ft_strtrim(string, to_remove));
// 	return (0);
// }
