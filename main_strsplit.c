/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:18:12 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/22 10:19:20 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	ft_strsplit("*Hello*fellow***students*", '*');	
	ft_strsplit("*****Hello****fellow***students*", '*');	
	ft_strsplit("Hello", '*');	
	ft_strsplit("*Hello*", '*');	
}
