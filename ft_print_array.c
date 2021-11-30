/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:13:20 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/30 17:18:08 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_array(char **arr, const char *s, char c)
{
	size_t	i;
	size_t	word_count;

	word_count = ft_word_count(s, c);
	i = 0;
	while (i <= word_count)
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
}
