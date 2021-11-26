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
	ft_memdel(&content);
	
}

int	main(void)
{
	void	(*del)(void *, size_t);
	t_list	*list;
	
	del = &ft_list_del;
	list = ft_lstnew("Hello", 6);
	ft_lstdelone(&list, del);
}

