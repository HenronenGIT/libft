/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:12:38 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/08 14:55:17 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	dest[10] = "Hello ";
	char	src[10] = "world!";
	int		dstsize;
	int		r;
	
	dstsize = ft_strlen(dest);
	printf("Dest size:%d\n", dstsize);//temp
	r = strlcat(dest, src, dstsize);
	printf("strlcat return:%d\n", r);//temp
	r = ft_strlcat(dest2, src, dstsize);
	printf("FT ret:%d\n", r);
}
