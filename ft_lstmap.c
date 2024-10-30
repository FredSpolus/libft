/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:54:17 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:54:18 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_node;
	t_list	*new_list_first_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list_node = ft_lstnew(f(lst->content));
	if (!new_list_node)
		return (NULL);
	new_list_first_node = new_list_node;
	lst = lst->next;
	while (lst)
	{
		new_list_node->next = ft_lstnew(f(lst->content));
		if (!new_list_node->next)
		{
			ft_lstclear(&new_list_first_node, del);
			return (NULL);
		}
		new_list_node = new_list_node->next;
		lst = lst->next;
	}
	new_list_node->next = NULL;
	return (new_list_first_node);
}
