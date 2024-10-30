/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:21 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:55:40 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates a substring in a string
// locates the first occurence of the null-terminated string needle
// in the string haystack.
// if needle is an empty string, haystack is returned
// if needle is not found NULL is returned
// if needle is found, returns a pointer to the first character of the first
// occurrence of needle
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i_2;
	char	*result;

	i = 0;
	i_2 = 0;
	result = (char *)haystack;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[i_2])
		{
			result = (char *)&haystack[i];
			while (haystack[i + i_2] == needle[i_2] && i + i_2 < len)
			{
				i_2++;
				if (needle[i_2] == '\0')
					return ((char *)result);
			}
		}
		i_2 = 0;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	hay[] = "1231231234";
// 	char	needle[] = "1234";
// 	printf("result : %s\n", ft_strnstr(hay, needle, -1));
// 	printf("result : %s\n", strnstr(hay, needle, -1));
// 	return (0);
// }
