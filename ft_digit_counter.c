/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_counter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:27:38 by hmaronen          #+#    #+#             */
/*   Updated: 2021/12/03 13:31:35 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_counter(int n, int base)
{
	int	temp;
	int	i;

	i = 0;
	temp = n;
	while (temp != 0 && i++ != -1)
		temp = temp / base;
	return (i);
}
