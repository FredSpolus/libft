/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:47:46 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 18:01:29 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a substring of s that begins from start and has
// a maximum length of len
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	test_len;
	size_t	s_len;

	s_len = ft_strlen(s);
	test_len = s_len - start;
	if (start >= s_len)
		return (ft_strdup(""));
	if (test_len > len)
		test_len = len;
	substring = malloc(sizeof(char) * (test_len + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, test_len + 1);
	return (substring);
}

// int main(void)
// {
// 	char source1[] = "tripouille";
// 	char *sub1 = ft_substr(source1, 100, 1);
// 	printf("%s\n", sub1);
// 	free(sub1);

// 	char source2[] = "0123456789";
// 	char *sub2 = ft_substr(source2, 9, 10);
// 	printf("%s\n", sub2);
// 	free(sub2);

// 	printf("soares :%s\n", ft_substr("", 1, 1));
// 	return (0);
// }
