/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:14 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:54:15 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*previous_node;
	t_list	*next_node;

	next_node = lst;
	previous_node = lst;
	while (next_node)
	{
		previous_node = next_node;
		next_node = next_node->next;
	}
	return (previous_node);
}
