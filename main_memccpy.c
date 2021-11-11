/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:04:10 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 17:36:13 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src;
	char		dst[50];
	size_t		n;
	int			c;

	src = "";
	n = 0;
	c = 'm';
	memccpy(dst, src, c, n);
	ft_putstr(dst);
	ft_putchar('\n');
	ft_memccpy(dst, src, c, n);
	ft_putstr(dst);
	ft_putchar('\n');
}
