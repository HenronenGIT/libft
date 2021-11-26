/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:10:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 16:26:01 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_del(void *content, size_t content_size)
{
	content_size = 0;
	content = NULL;
	//ft_memdel(content);
	//free(content);
}

void	ft_print_list(t_list *list)
{
	while (list != NULL)
	{
		ft_putstr(list->content);
		list = list->next;
		ft_putchar('\n');
	}
}

int	main(void)
{
	void	(*del)(void *, size_t);
	t_list	*list;
	
	del = &ft_list_del;
	list = ft_lstnew("Hello", 6);
	ft_print_list(list);
	ft_lstdelone(&list, del);
}

