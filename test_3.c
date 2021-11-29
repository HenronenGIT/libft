/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:13:48 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/29 16:29:45 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

#define	RED "\x1B[31m"
#define	GREEN "\x1B[32m"
#define	RESET "\x1B[0m"

/* Test file for functions:
 * memcpy
 * strcpy
 * strcat
 * strcmp
 * srstr
 * memmove
 * memcmp
 */

void	test_3()
{
    /*  ft_memcpy   */
    printf("%sFT_MEMCPY TESTS\n", GREEN);
	printf(RESET);

	printf("%s\n", memcpy((void *)0, (void *)0, 5));
	printf("%s\n\n", ft_memcpy((void *)0, (void *)0, 5));
	//printf("%s\n", memcpy("Hello world", "Hi!", 5));
	//printf("%s\n", ft_memcpy("Hello world", "Hi!", 5));


	/*	strcpy	*/
	const char	*src1;	
	const char	*src2;
	const char	*src3;	
	const char	*src4;
	char		dest1[20];
	char		dest2[20];
	char		dest3[20];
	char		dest4[20];

	src1 = "Hello world!";
	src2 = " ";
	src3 = "";
	src4 = "Hello";

	printf("|%s|\n", strcpy(dest1, src1));
	printf("|%s|\n\n",ft_strcpy(dest1, src1));

	printf("|%s|\n", strcpy(dest2, src2));
	printf("|%s|\n\n",ft_strcpy(dest2, src2));

	printf("|%s|\n", strcpy(dest3, src3));
	printf("|%s|\n\n",ft_strcpy(dest3, src3));

	printf("|%s|\n", strcpy(dest4, src4));
	printf("|%s|\n\n",ft_strcpy(dest4, src4));
}
