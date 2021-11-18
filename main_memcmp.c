/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:51:59 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 12:25:02 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s1;
	const char	*s2;
	const char	*s3;
	const char	*s4;
	const char	*s5;
	const char	*s6;
	const char	*s7;
	const char	*s8;

	//s1 = "\xff\xaa\xde\x12";
	//s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	s1 = "Hello world";
	s2 = "Hello";
	s3 = "";
	s4 = "";
	s5 = "Hello aorld!";
	s6 = "Hello world!";
	s7 = "Hello world!";
	s8 = "";

	printf("%d\n",memcmp(s1, s2, 12));
	printf("%d\n\n",ft_memcmp(s1, s2, 12));

	printf("%d\n",memcmp(s3, s4, 12));
	printf("%d\n\n",ft_memcmp(s3, s4, 12));

	printf("%d\n",memcmp(s5, s6, 12));
	printf("%d\n\n",ft_memcmp(s5, s6, 12));

	printf("%d\n",memcmp(s7, s8, 12));
	printf("%d\n\n",ft_memcmp(s7, s8, 12));

	printf("%d\n",memcmp("abcdefgh", "abcdefghj", 7));
	printf("%d\n\n",ft_memcmp("abcdefgh", "abcdefgj", 7));

	printf("%d\n",memcmp("zbcdefgh", "abcdefghj", 0));
	printf("%d\n\n",ft_memcmp("zbcdefgh", "abcdefgj", 0));
	return (0);
}
