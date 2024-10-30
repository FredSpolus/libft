/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:20 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:54:21 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_item;

	new_item = (t_list *)malloc(sizeof(t_list) * 1);
	if (!new_item)
		return (NULL);
	new_item->content = content;
	new_item->next = NULL;
	return (new_item);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*test = "test";
// 	void	*result;
// 	result = ft_lstnew(test)->content;
// 	printf("resul : %s\n", (char *)result);
// 	return (0);
// }
