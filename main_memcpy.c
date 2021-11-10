/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:28:29 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/10 11:00:23 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char		dst[50];
	const char	*src;
	size_t		n;

	n = 49;
	src = "Hello World!";
	ft_putstr(memcpy(dst, src, n));
	ft_putchar('\n');
	ft_putstr(ft_memcpy(dst, src, n));
	ft_putchar('\n');
}
