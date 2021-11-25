/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:46:32 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 18:10:26 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s = (char *)src;
	char	*d = (char *)dst;
	size_t	i;

	i = 0;
	if (d == 0 && s == 0)
		return (NULL);
	if (d < s)
	{
		while (len > i)
		{		
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (0 < len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (d);
}
