/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:51:59 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/10 15:19:27 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;
	const char	*s3;
	const char	*s4;
	const char	*s5;
	const char	*s6;
	const char	*s7;
	const char	*s8;
	size_t		n;
	int			ret_nb;

	s1 = "Hello world!";
	s2 = "Hello world!";
	s3 = "";
	s4 = "";
	s5 = "Hello aorld!";
	s6 = "Hello world!";
	s7 = "Hello world!";
	s8 = "";
	n = 11;


	ret_nb = memcmp(s1, s2, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ret_nb = ft_memcmp(s1, s2, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ft_putchar('\n');

	ret_nb = memcmp(s3, s4, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ret_nb = ft_memcmp(s3, s4, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ft_putchar('\n');

	ret_nb = memcmp(s5, s6, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ret_nb = ft_memcmp(s5, s6, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ft_putchar('\n');

	ret_nb = memcmp(s7, s8, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ret_nb = ft_memcmp(s7, s8, n);
	ft_putnbr(ret_nb);
	ft_putchar('\n');
	ft_putchar('\n');

	return (0);
}
