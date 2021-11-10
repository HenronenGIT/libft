/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:42:55 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 13:15:59 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;

	s1 = "Compare these strings!";
	s2 = "Compare thase strings!";
	ft_putstr("1st\n");
	ft_putnbr(strncmp(s1, s2, 11));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(s1, s2, 11));
	ft_putchar('\n');
	ft_putstr("2nd\n");
	ft_putnbr(strncmp(s1, s2, 10));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(s1, s2, 10));
	ft_putchar('\n');
	ft_putstr("3rd\n");
	ft_putnbr(strncmp(s1, s2, 1000));
	ft_putchar('\n');
	ft_putnbr(ft_strncmp(s1, s2, 1000));
	ft_putchar('\n');
}
