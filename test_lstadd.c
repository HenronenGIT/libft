/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:16:14 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/26 17:16:29 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	main(void)
{
	t_list	*list;
	t_list	*list2;

	list2 = NULL;
	const char *s1;
	const char *s2;
	s1 = "This is string 1";
	s2 = "This is string 2";
	
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	

	//ft_print_list(list);
	//printf("%s\n", (char *)list->content);
	//ft_lstadd(&list, list2);
	
}
