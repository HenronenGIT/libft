/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:04:06 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/24 10:35:28 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static	*converter(int n, char *str, int i)
{
	while (i >= 0 && str[i] != '-')
	{
		str[i] = inttoasc(n);
		n = n / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			temp;

	temp = n;
	i = 0;
	while (temp != 0 && i++ != -1)
		temp = temp / 10;
	if (n < 0)
	{
		str = ft_strnew(i + 1);
		if (!str)
			return (NULL);
		str[0] = '-';
		if (n == -2147483648)
			return (str = "-2147483648");
		n = n * -1;
	}
	else
	{
		str = ft_strnew(i);
		i = i - 1;
	}
	if (n == 0)
		str[0] = '0';
	return (converter(n, str, i));
}
