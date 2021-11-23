/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:46:32 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/23 14:28:57 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	if (((void *)dst) == 0 && ((void *)src) == 0)
		return (NULL);
	temp = ft_memalloc(len);
	if (temp == NULL)
		return (NULL);
	else
	{
		while (i != len)
		{
			((unsigned char *)temp)[i] = ((unsigned char *)src)[i];
			i++;
		}
		i = 0;
		while (i != len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)temp)[i];
			i++;
		}
	}
	free(temp);
	return (dst);
}
