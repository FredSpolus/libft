/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:53:43 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:53:44 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0 : %d\n", ft_isalnum('0'));
// 	printf("a : %d\n", ft_isalnum('a'));
// 	printf("B : %d\n", ft_isalnum('B'));
// 	return (0);
// }
