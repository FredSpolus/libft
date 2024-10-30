/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:56:41 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:37:31 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char *s, char c)
{
	int	i;
	int	strings;

	i = 0;
	strings = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strings++;
			while (s[i] != c && s[i])
			{
				i++;
				if (!s[i])
					return (strings);
			}
		}
		i++;
	}
	return (strings);
}

static char	**alloc_strings(char const *s, char c, int qty, char **array)
{
	int	i;
	int	i_char;
	int	i_str;

	i = 0;
	i_str = 0;
	i_char = 0;
	while (i_str < qty)
	{
		i_char = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			i_char++;
		}
		array[i_str] = (char *)malloc(sizeof(char) * (i_char + 1));
		if (!array[i_str])
			return (NULL);
		i_str++;
	}
	return (array);
}

static char	**assign_strings(char const *s, char c, int qty, char **array)
{
	int	i;
	int	i_str;
	int	i_char;

	i = 0;
	i_str = 0;
	i_char = 0;
	while (i_str < qty)
	{
		i_char = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			array[i_str][i_char] = s[i];
			i++;
			i_char++;
		}
		array[i_str][i_char] = '\0';
		i_str++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		strings;

	strings = 0;
	strings = count_strings((char *)s, c);
	array = (char **)malloc(sizeof(char *) * (strings + 1));
	if (!array)
		return (NULL);
	array = alloc_strings(s, c, strings, array);
	array = assign_strings(s, c, strings, array);
	array[strings] = NULL;
	return (array);
}

// int	main(void)
// {
// 	char	str_base[] = " tripouille  42";
// 	char	divider = ' ';

// 	char **ar;
// 	ar = ft_split(str_base, divider);
// 	if (!ar)
// 	{
// 		printf("split failed\n");
// 		return (1);
// 	}

// 	printf("first part : %s\n", ar[0]);
// 	printf("second part : %s\n", ar[1]);
// 	printf("third part : %s\n", ar[2]);

// 	free(ar[0]);
// 	free(ar[1]);
// 	free(ar);
// 	return (0);
// }
