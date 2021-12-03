/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:32:45 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 13:32:21 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	cpy = (char *)malloc((i + 1) * sizeof(*cpy));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
