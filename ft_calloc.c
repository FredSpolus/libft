/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:53:28 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:15:00 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// it malloc a string based on the count of items and size in bytes,
// meaning we multiply count by size while allocating the memory for it.

// and fills the string created with 0 on alll postions, we can use ft_bzero
// in order to fill it, passing to it the the created string and the result
// of count * size.
void	*ft_calloc(size_t count, size_t size)
{
	size_t	t_size;
	void	*alloc;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > (SIZE_MAX / size))
		return (NULL);
	t_size = count * size;
	alloc = malloc(t_size);
	if (alloc == NULL)
		return (NULL);
	else
		ft_bzero(alloc, t_size);
	return (alloc);
}

// int	main(void)
// {
// 	char	*test;
// 	test = (char *)ft_calloc(-5, 3);
// 	printf("test: %s", test);
// 	return (0);
// }
