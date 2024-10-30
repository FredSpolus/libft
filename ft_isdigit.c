/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:53:51 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:53:52 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0 : %d\n", ft_isdigit('0'));
// 	printf("a : %d\n", ft_isdigit('a'));
// 	printf("B : %d\n", ft_isdigit('B'));
// 	return (0);
// }
