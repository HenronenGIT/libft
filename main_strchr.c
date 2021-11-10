/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:38:12 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 14:31:33 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	s[50] = "Hello wborld";
	int			c;
	char		*ret;
	char		*ret2;

	c = 'b';
	ret = (strchr(s, c));
	if (ret != NULL)
	{
		ft_putstr(ret);
		ft_putchar('\n');
	}
	ret2 = ft_strchr(s, c);
	if (ret2 != NULL)
	{
		ft_putstr(ret2);
		ft_putchar('\n');
	}
}
