/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:05:15 by hmaronen          #+#    #+#             */
/*   Updated: 2021/12/27 17:58:29 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_realloc(char **s1, char const *s2)
{
	int		len;
	int		i;
	char	*temp;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return ;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	temp = ft_strdup(*s1);
	if (temp == NULL)
		return ;
	free(*s1);
	*s1 = ft_strnew(len);
	ft_strcpy(*s1, temp);
	free(temp);
	ft_strcat(*s1, s2);
}
