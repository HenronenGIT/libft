/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:33:41 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/23 12:23:18 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	size_t	i;

	if (ap == NULL)
		return ;
	i = 0;
	free(*ap);
	*ap = NULL;
}
