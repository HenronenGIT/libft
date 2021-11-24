/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:18:12 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/24 13:02:15 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	**arr;
	
	arr = ft_strsplit("*Hello*fellow***students*", '*');	
	printf("%s\n", arr[2]);
	//ft_strsplit("*****Hello****fellow***students*", '*');	
	//ft_strsplit("Hello", '*');	
	//ft_strsplit("*Hello*", '*');	
}
