/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:42:03 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 13:52:28 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dest[15];
	char		dest2[15];
	const char	*src;

	src = "1234567891101112134546471011121345464710111213454647011121345464748";
	ft_putstr("Real: ");
	ft_putstr(strncpy(dest, src, 14));
	ft_putchar('\n');
	ft_putstr("FT: ");
	ft_putstr(ft_strncpy(dest2, src, 14));
	ft_putchar('\n');
}
