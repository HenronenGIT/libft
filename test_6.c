/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:57:55 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/30 15:33:35 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "colors.h"
#include <stdio.h>
#include <ctype.h>

/*	Test file for functions:
 *	memdel
 *	striter
 *	striteri
 *	strmap
 *	strmapi
 *	strtrim
 *	strsplit
 *	itoa
 */

static char	ft_lcase_map(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
static void	ft_lcasei(unsigned int i , char *s)
{
	i = 0;
	if (*s >= 'A' && *s <= 'Z')
	{
		*s = *s + 32;
	}
}

void	test_6()
{
	printf("%sFT_MEMDEL TESTS\n", GREEN);
	printf(RESET);
	void	*ret;
	size_t	i;

	i = 0;
	ret = ft_memalloc(5);
	printf("%sSent pointer address and content:\n", GREEN);
	printf(RESET);
	printf("%p\n", &ret);
	while (i != 5)
	{
		printf("%d", ((char *)ret)[i]);
		i++;
	}
	printf("\n");
	ft_memdel(&ret);
	printf("%sReturned ptr address and content:\n", GREEN);
	printf(RESET);
	printf("%s\n",(char *)ret);
	printf("%p\n\n", &ret);

	/*	striter	*/
	printf("%sFT_STRITER TESTS\n", GREEN);
	printf(RESET);

	const char	*str;
	char	s[50];
	void	(*f)(char *);
	void	(*f2);

	/*Making string what needs to be iterated*/
	str = "HELLO WorLd!";
	ft_strcpy(s, str);

	f = &ft_lcase;
	/*Normal test.*/
	printf("%sString, before ft_striter()\n", GREEN);
	printf(RESET);
	printf("%s\n\n", s);
	ft_striter(s,f);
	printf("%sString, after ft_striter()", GREEN);
	printf(RESET);
	printf("\n%s\n\n", s);
	/*Poiners are null test.*/
	printf("%sSending NULL pointer\n", GREEN);
	printf(RESET);
	f2 = NULL;
	ft_striter(NULL,f2);
	printf("\n");

	/*	striteri	*/
	printf("%sFT_STRITER(I) TESTS\n", GREEN);
	printf(RESET);
	char		s3[] = "HELLO WORLD";
	void		(*f3)(unsigned int, char *);

	f3 = &ft_lcasei;

	printf("%sString, before ft_striter(I)()\n", GREEN);
	printf(RESET);
	printf("%s\n", s3);
	printf("%sString, after ft_striter(I)()\n", GREEN);
	printf(RESET);
	ft_striteri(s3, f3);
	printf("%s\n", s3);
	printf("%sSending NULL pointers\n", GREEN);
	printf(RESET);
	ft_striteri(NULL,NULL);
	printf("\n");

	/*	strmap	*/
	printf("%sFT_STRMAP TESTS\n", GREEN);
	printf(RESET);

	char (*f4)(char);
	char	*s2;

	s2 = NULL;
	f4 = &ft_lcase_map;

	printf("%s\n",ft_strmap("HELLO woRLD!", f4));
	printf("%s\n",ft_strmap("hello world!", f4));

	ft_strmap(s2, f4);
}
