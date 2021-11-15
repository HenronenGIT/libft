/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:04:10 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/12 09:37:03 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src;
	char		d1[22];
	char		d2[22];
	char		d3[22];
	char		d4[22];
	char		d5[22];
	char		d6[22];

	src = "This test if memccpy!";
	memccpy(d1, src, 'i', 22);
	printf("|%s|\n",d1);
	ft_memccpy(d2, src, 'i', 22);
	printf("|%s|\n\n", d2);

	memccpy(d3, src, 'l', 22);
	printf("|%s|\n",d3);
	ft_memccpy(d4, src, 'l', 22);
	printf("|%s|\n\n", d4);

	memccpy(d5, src, 'i', 0);
	printf("|%s|\n",d5);
	ft_memccpy(d6, src, 'i', 0);
	printf("|%s|\n\n", d6);
}
