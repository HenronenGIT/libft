/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:37:15 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 14:38:36 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	s[50] = "This is ab world!";
	int			c;
	char		*ret;
	char		*ret2;

	c = 'b';
	ret = (strrchr(s, c));
	if (ret != NULL)
	{
		ft_putstr(ret);
		ft_putchar('\n');
	}
	ret2 = ft_strrchr(s, c);
	if (ret2 != NULL)
	{
		ft_putstr(ret2);
		ft_putchar('\n');
	}
}
