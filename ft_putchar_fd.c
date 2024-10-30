/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:45 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:54:46 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int	main(void)
// {
// 	int	file_d;
// 	char	test = '0';
// 	file_d = open("file.txt", O_WRONLY);
// 	if (file_d == -1)
// 		write(1, "error opening file", 18);
// 	ft_putchar_fd(test, file_d);
// 	return (0);
// }
