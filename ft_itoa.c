/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:04:06 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/22 12:43:44 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			temp;

	temp = n;
	i = 0;
	while (temp != 0)
	{
		temp = temp / 10;
		i++;
	}
	if (n < 0)
	{
		str = ft_strnew(i + 1);
		str[0] = '-';
		n = n * -1;
	}
	else
	{
		str = ft_strnew(i);
		i = i - 1;
	}	
	if (n == 0)
		str[0] = '0';
	while (i >= 0 && str[i] != '-')
	{
		str[i] = inttoasc(n);
		n = n / 10;
		i--;
	}
	return (str);
}
