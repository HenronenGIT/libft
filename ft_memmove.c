/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:46:32 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 12:02:49 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	size_t		src_len;

	src_len = 0;
	i = 0;
	if (((void *)dst) == 0 && ((void *)src) == 0)
		return (NULL);
	src_len = ft_strlen((char *)src);
	//if (src_len < len)
	{
		while (len != 0)
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	//else
	//{
	//	while (src_len != 0)
	//	{
	//		((unsigned char *)dst)[src_len] = ((unsigned char *)src)[src_len];
	//		src_len--;
	//		//i--;
	//	}
	//}
	return (dst);
}
