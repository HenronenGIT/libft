/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:10:56 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 14:28:16 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dest1[50] = "Hello ";
	const char	src[50] = "world";
	char		dest2[50] = "Hello ";
	size_t		n;

	n = 5;
	ft_putstr("RL:");
	ft_putstr(strncat(dest1, src, n));
	ft_putchar('\n');
	ft_putstr("FT:");
	ft_putstr(ft_strncat(dest2, src, n));
	ft_putchar('\n');
}
