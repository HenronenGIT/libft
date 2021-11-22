/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:24:31 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/22 16:32:23 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi_whitespace(const char c);
int	convertor(char *str);

int	ft_atoi(const char *str)
{
	int		i;
	int		temp;

	temp = 1;
	i = 0;
	if (ft_isalpha(str[i]))
		return (0);
	while (atoi_whitespace(str[i]))
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
	return (convertor((char *)&str[i]) * temp);
}

int	convertor(char *str)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (!ft_isdigit(str[i]))
			return (nb);
		nb = (nb * 10) + str[i] - 48;
		i++;
	}
	return (nb);
}

int	atoi_whitespace(const char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}
