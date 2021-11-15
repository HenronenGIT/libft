/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:54:52 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/15 11:10:07 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str;
	char	s[50];
	void	(*f)(char *);

	//Making string what needs to be iterated
	str = "Hello world!";
	ft_strcpy(s, str);
	printf("%s\n", s);

	f = &ft_putstr;
	ft_striter(s,f);

}
