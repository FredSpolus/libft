/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:06 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:54:07 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;
	t_list	*current_node;

	if (!del || !lst || !*lst)
		return ;
	next_node = *lst;
	current_node = *lst;
	while (next_node->next)
	{
		current_node = next_node;
		del(current_node->content);
		next_node = current_node->next;
		free(current_node);
	}
	del(next_node->content);
	free(next_node);
	*lst = NULL;
}
