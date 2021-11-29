/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:16:14 by hmaronen          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/11/29 10:58:35 by hmaronen         ###   ########.fr       */
=======
/*   Updated: 2021/11/26 17:16:29 by hmaronen         ###   ########.fr       */
>>>>>>> 0858efeeb31398bd6f36a9a623b288c1fc742cf5
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	main(void)
{
<<<<<<< HEAD
	t_list		*list;
	t_list		*list2;
	const char	*s1;
	const char	*s2;

	s1 = "Hello Hive!";
	s2 = "This is Marvin!";
	list = ft_lstnew(s1, ft_strlen((char *)s1));
	list2 = ft_lstnew(s2, ft_strlen((char *)s2));

	ft_lstadd(&list, list2);
	//printf("%s\n", list->content);
	//printf("%s\n", list2->content);
	ft_print_list(list);
=======
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
	
>>>>>>> 0858efeeb31398bd6f36a9a623b288c1fc742cf5
}
