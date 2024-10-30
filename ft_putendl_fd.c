/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:48 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:36:21 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// puts the string provided followed by a line break
void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

// #include <fcntl.h>
// int	main(void)
// {
// 	char	test[] = "write to file";
// 	int		file_d = open("file.txt", O_WRONLY);
// 	ft_putendl_fd(test, file_d);
// 	return (0);
// }
