/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:53 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 14:51:53 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// #include <fcntl.h>
// int	main(void)
// {
// 	char test[] = "write this to file";
// 	int	file_d;
// 	file_d = open("file.txt", O_WRONLY);
// 	ft_putstr_fd(test, file_d);
// 	return (0);
// }
