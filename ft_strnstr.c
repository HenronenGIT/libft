/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:54:10 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/23 13:49:10 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*sub_string;

	i = 0;
	if (needle[i] == 0 )
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			sub_string = &haystack[i];
			while (haystack[i + j] == needle[j] && j != len)
			{
				j++;
				if (needle[j] == 0)
					return ((char *)sub_string);
			}
		}
		i++;
	}
	return (NULL);
}
