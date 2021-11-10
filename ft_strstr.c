/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:50:54 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 14:41:02 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int			i;
	int			j;
	const char	*sub_string;

	i = 0;
	while (s1[i] != 0)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			sub_string = &s1[i];
			while (s1[i] == s2[j])
			{
				i++;
				j++;
				if (s2[j] == 0)
					return ((char *)sub_string);
			}
		}
		i++;
	}
	return ((char *)s1);
}
