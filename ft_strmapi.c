/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:45:57 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 11:15:13 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(new_str) * ft_strlen((char *)s));
	if (new_str != 0)
	{
		while (s[i] != 0)
		{
			new_str[i] = f(i, s[i]);
			i++;
		}
	}
	return (new_str);
}
