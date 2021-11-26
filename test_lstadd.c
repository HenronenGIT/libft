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
	t_list	list;

	const char *s1;
	s1 = "Hello world!";
	
	list = ft_lstnew(s1, ft_strlen(s1));

}
