/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:46:25 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 17:10:26 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dst[50] = "Destination is here!";
	const char	*src;
	size_t		len;

	src = "Source is here!";
	len = 7;
	memmove(&dst[5], src, len);
	ft_putstr(dst);
	ft_putchar('\n');
	ft_memmove(&dst[5], src, len);
	ft_putstr(dst);
	ft_putchar('\n');
}
