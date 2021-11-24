/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:39:44 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/24 10:50:47 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_char_count(const char *s, char c)
{
	size_t	i;
	size_t	char_count;

	printf("%s\n", s);

	char_count = 0;
	i = 0;
	while (s[i] != c)
	{
		char_count++;
		i++;
	}
	return (char_count);
}

int	main(void)
{
	char const	*s = "*Hello*fellow***students*";
	size_t		i;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != '*')
		{

			//printf("%zu\n", ft_char_count(&s[i] , '*'));
			char *new[j] = malloc(ft_char_count);
		}
		i++;
		}
}
