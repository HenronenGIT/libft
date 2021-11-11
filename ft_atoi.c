/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:24:31 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 11:01:35 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		temp;

	nb = 0;
	i = 0;
	if (str[i] >= 'A' && str[i] <= 127)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i + 1] == '+' || str[i + 1] == '-')
	   return (0);
	if (str[i] == '-')
	{
		temp = -1;
		i++;
	}
	else if (str[i] == '+')
			i++;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (nb);
		nb = (nb * 10) + str[i] - 48;
		i++;
	}
	if (temp == -1)
		return (nb * -1);
	else
		return (nb);
}
