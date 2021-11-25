/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:04:06 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 17:10:30 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*converter(int n, char *str, int i)
{
	while (i >= 0 && str[i] != '-')
	{
		str[i] = inttoasc(n);
		n = n / 10;
		i--;
	}
	return (str);
}

static char	*ft_negative_handler(int i)
{
	char	*str;

	str = ft_strnew(i + 1);
	if (!str)
		return (NULL);
	str[0] = '-';
	return (str);
}

static int	ft_digit_counter(int n)
{
	int	temp;
	int	i;

	i = 0;
	temp = n;
	while (temp != 0 && i++ != -1)
		temp = temp / 10;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;

	i = ft_digit_counter(n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		else
			str = ft_negative_handler(i);
		n = n * -1;
	}
	else
	{
		str = ft_strnew(i);
		if (!str)
			return (NULL);
		i = i - 1;
	}
	return (converter(n, str, i));
}
