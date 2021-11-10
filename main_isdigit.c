/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:28:33 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 15:37:04 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = '0';
	ft_putnbr(isdigit(c));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit(c));
	ft_putchar('\n');
	c = '1';
	ft_putnbr(isdigit(c));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit(c));
	ft_putchar('\n');
	c = '9';
	ft_putnbr(isdigit(c));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit(c));
	ft_putchar('\n');
	c = 'a';
	ft_putnbr(isdigit(c));
	ft_putchar('\n');
	ft_putnbr(ft_isdigit(c));
	ft_putchar('\n');
}
