/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:13:57 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 11:42:19 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "Compare these strings!";
	s2 = "Compare thase strings!";
	ft_putnbr(strcmp(s1, s2));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp(s1, s2));
	ft_putchar('\n');
}
