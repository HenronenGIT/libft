/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:24:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/09 10:57:43 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(char *str);

int	main(void)
{
	printf("[ ** ] Note: The following tests should always pass.\n");
	test("1");
	test("+1");
	test("-1");
	test("1002");
	test("-1002");
	test("00123");
	test("  1002");
	test("  +1002");
	test("  -1002");
	test("1020304050");
	test("2147483647");
	test("2147483648");
	test("-2147483648");
	test("");
	test("  ");
	test("10-22");
	test("69p0");
	test("+-12");
	test("-+12");
	test("a");
	test("aaa");
	return (0);
}

void	test(char *str)
{
	int		expected;
	int		result;
	char	*status;
	char	formatted[16];

	expected = atoi(str);
	result = ft_atoi(str);
	status = expected == result ? "PASS" : "FAIL";
	sprintf(formatted, "\"%s\"", str);
	printf("[%s] Original: %13s, Result: %11d, Expected: %11d\n", status, formatted, result, expected);
}
