/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:50:46 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 14:41:04 by hmaronen         ###   ########.fr       */
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
		ft_putstr(strstr(s1, s2));
		ft_putchar('\n');
		ft_putstr(ft_strstr(s1, s2));
		ft_putchar('\n');
	}
	if (s3[0] != '\0')
	{
		ft_putstr(strstr(s3, s4));
		ft_putchar('\n');
		ft_putstr(ft_strstr(s3, s4));
		ft_putchar('\n');
	}
	if (s5[0] != '\0')
	{	
		ft_putstr(strstr(s5, s6));
		ft_putchar('\n');
		ft_putstr(ft_strstr(s5, s6));
		ft_putchar('\n');
	}
	if (s7[0] != '\0')
	{	
		ft_putstr(strstr(s7, s8));
		ft_putchar('\n');
		ft_putstr(ft_strstr(s7, s8));
		ft_putchar('\n');
	}
}
