/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:50 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 16:46:36 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		write (fd, "-", 1);
		number *= -1;
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}

// #include <fcntl.h>
// int	main(void)
// {
// 	int	test = 42;
// 	int	file_d = open("file.txt", O_WRONLY);
// 	ft_putnbr_fd(test, file_d);
// 	return (0);
// }
