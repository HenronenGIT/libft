/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:33:53 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/11 14:09:23 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	void	*ret;
	size_t	i;

	i = 0;
	ret = ft_memalloc(5);
	while (i != 5)
	{
		printf("%d", ((char *)ret)[i]);
		i++;
	}
	printf("\n");
	ft_memdel(&ret);
	printf("%s\n", ret);
}
