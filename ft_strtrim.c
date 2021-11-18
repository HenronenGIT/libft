/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:37:13 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/18 15:17:51 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new_str;
	int		i;
	int		start;
	int		end;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',')
		i++;
	start = i;
	while (s[i] != 0)
		i++;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ','
		   || s[i] == '\0')
		i--;
	end = i;
	i = 0;
	new_str = (char *)malloc(sizeof(new_str) * (end - start) + 1);
	if (new_str == 0)
		return (new_str = 0);
	while (start <= end)
	{
		new_str[i] = s[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
