/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:22:23 by hmaronen          #+#    #+#             */
/*   Updated: 2021/12/01 11:39:07 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates a list lst and applies the function f to each link to
* create a “fresh” list (using malloc(3)) resulting from the successive
* applications of f. If the allocation fails, the function
* returns NULL.*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;

		f = NULL;
	//ft_print_list(lst);
	if(lst)
	{
		new_list = malloc(sizeof(lst));
		ft_memcpy(new_list->content, lst->content, lst->content_size);
		lst = lst->next;
	}
	while (lst)
	{
		new_list->next = malloc(sizeof(lst));
		new_list = new_list->next;
		ft_memcpy(new_list->content, lst->content, lst->content_size);
		lst = lst->next;
	}
	new_list->next = NULL;
	return (new_list);
}
