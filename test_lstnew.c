/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:38:39 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 15:05:37 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_list(t_list *list);

int	main(void)
{
	/* Normal char test */
	t_list	*list;
	list = ft_lstnew("Hello", 6);
	ft_print_list(list);

	/* Normal int test */
	//t_list	*list4;
	//list4 = ft_lstnew(, 5);

	/* Content is null, but still sendint content size */
	t_list	*list2;
	list2 = ft_lstnew(NULL, 5);
	ft_print_list(list2);

	/* Sending content, but size is 0 */
	t_list	*list3;
	list3 = ft_lstnew("Hello", 0);
	ft_print_list(list3);
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
