/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:54:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 11:13:49 by hmaronen         ###   ########.fr       */
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
	size_t		len;

	len = 3;
	s1 = "There is needle in a haystack!";
	s2 = "needle";
	s3 = "";
	s4 = "needle";
	s5 = "There is needle in a haystack!";
	s6 = "";
	s7 = "There is needle in a neede stack - needle";
	s8 = "needle";
	if (s1[0] != '\0')
	{
		ft_putstr(strnstr(s1, s2, len));
		ft_putchar('\n');
		ft_putstr(ft_strnstr(s1, s2, len));
		ft_putchar('\n');
	}
		if (s3[0] != '\0')
	{
		ft_putstr(strnstr(s3, s4, len));
		ft_putchar('\n');
		ft_putstr(ft_strnstr(s3, s4, len));
		ft_putchar('\n');
	}
	if (s5[0] != '\0')
	{
		ft_putstr(strnstr(s5, s6, len));
		ft_putchar('\n');
		ft_putstr(ft_strnstr(s5, s6, len));
		ft_putchar('\n');
	}
	if (s7[0] != '\0')
	{
		ft_putstr(strnstr(s7, s8, len));
		ft_putchar('\n');
		ft_putstr(ft_strnstr(s7, s8, len));
		ft_putchar('\n');
	}
}
