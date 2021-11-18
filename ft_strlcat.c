/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:12:44 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 18:15:10 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;
	size_t	len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(((char *)src));
	j = 0;
	i = 0;
	if (dstsize > d_len)
		len = d_len + s_len;
	else
		len = dstsize + s_len;
	while (dest[i] != '\0')
		i++;
	while (src[i] != 0 && d_len <= dstsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}
