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

//t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
//{
//	t_list	*tmp;
//	t_list	*new_list;
//
//	f = NULL;
//	
//	tmp = ft_lstnew(lst->content, lst->content_size);
//	if (!tmp)
//		return (NULL);
//	new_list = tmp;
//	printf("map 2");
//	lst = lst->next;
//	printf("map 1");
//
//	return (tmp);
//
//}