/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:30:27 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 13:44:19 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src;	
	const char	*src2;
	char		dest[20];

	src = "Hello world!";
	src2 = "";
	ft_putstr(strcpy(dest, src));
	ft_putchar('\n');
	ft_putstr(ft_strcpy(dest, src));
	ft_putchar('\n');
	ft_putstr(strcpy(dest, src2));
	ft_putchar('\n');
	ft_putstr(ft_strcpy(dest, src2));
	return (0);
}
