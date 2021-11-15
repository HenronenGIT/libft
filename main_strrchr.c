/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:37:15 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/12 15:07:59 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	s1[50] = "This is ab world!";
	const char	s2[50] = "Helloworldâ";
	int			c;

	c = 'b';
	printf("\n%s\n",strrchr(s1, c));
	printf("%s\n\n",ft_strrchr(s1, c));

	printf("%s\n",strrchr(s2, L'â'));
	printf("%s\n\n",ft_strrchr(s2, L'â'));
}
