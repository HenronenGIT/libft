/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:38:21 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/26 13:46:50 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	//tmp = ft_memalloc(content_size);
	tmp = malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	if (content == NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		tmp->content = malloc(content_size);
		if (!content)
			return (NULL);
		ft_memcpy(tmp->content, content, content_size);
		tmp->content_size = content_size;
		tmp->next = NULL;
	}
	return (tmp);
}
