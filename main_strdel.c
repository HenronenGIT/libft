/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:14:46 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/15 09:40:50 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*ret;

	ret = ft_strnew(5);
	ft_strdel(&ret);
	if (!ret)
		printf("PASS");
	else
		printf("FAIL");
}
