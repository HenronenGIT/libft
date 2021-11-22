/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:24:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/17 15:52:07 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_atoi("1"));
	printf("%d\n\n", atoi("1"));
	printf("%d\n", ft_atoi("+1"));
	printf("%d\n\n", atoi("+1"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n\n", atoi("-1"));
	printf("%d\n", ft_atoi("1000"));
	printf("%d\n\n", atoi("1000"));
	printf("%d\n", ft_atoi("001234"));
	printf("%d\n\n", atoi("001234"));
	printf("%d\n", ft_atoi("   1002"));
	printf("%d\n\n", atoi("   1002"));
	printf("%d\n", ft_atoi("   +1002"));
	printf("%d\n\n", atoi("   +1002"));
	printf("%d\n", ft_atoi("   -1002"));
	printf("%d\n\n", atoi("   -1002"));
	printf("%d\n", ft_atoi("9999999999999999"));
	printf("%d\n\n", atoi("9999999999999999"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n\n", atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n\n", atoi(""));
	printf("%d\n", ft_atoi("   "));
	printf("%d\n\n", atoi("   "));
	printf("%d\n", ft_atoi("10-22"));
	printf("%d\n\n", atoi("10-22"));
	printf("%d\n", ft_atoi("69p0"));
	printf("%d\n\n", atoi("69p0"));
	printf("%d\n", ft_atoi("+-12"));
	printf("%d\n\n", atoi("+-12"));
	printf("%d\n", ft_atoi("-+12"));
	printf("%d\n\n", atoi("-+12"));
	printf("%d\n", ft_atoi("++12"));
	printf("%d\n\n", atoi("++12"));
	printf("%d\n", ft_atoi("--12"));
	printf("%d\n\n", atoi("--12"));
	printf("%d\n", ft_atoi("a"));
	printf("%d\n\n", atoi("a"));
	printf("%d\n", ft_atoi("aaa"));
	printf("%d\n\n", atoi("aaa"));
	printf("%d\n", ft_atoi("++++++12"));
	printf("%d\n\n", atoi("++++++12"));
	printf("%d\n", ft_atoi("++12"));
	printf("%d\n\n", atoi("++12"));
	printf("%d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%d\n\n", atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%d\n", ft_atoi("-47-5"));
	printf("%d\n\n", atoi("-47-5"));


}
