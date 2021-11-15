/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:10:56 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/15 16:36:15 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		dest1[50] = "Hello ";
	char		dest2[50] = "Hello ";
	char		dest3[20];
	char		dest4[20];
	const char	*src;
	const char	*src2;
	
	src = "";
	src2 = "lorem ipsum";
	

	printf("%s\n",strncat(dest1, src, 3));
	printf("%s\n\n",ft_strncat(dest2, src, 3));

	printf("%s\n",strncat(dest3, src2, 0));
	printf("%s\n\n",ft_strncat(dest4, src2, 0));

}
