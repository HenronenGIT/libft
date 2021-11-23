/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:18:05 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/22 10:35:46 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(const char *s, char c);
int		ft_char_count(const char *s, char c);

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	char	*new_str;
	size_t	i;
	size_t	j;
	//can also use in malloc to save 1 variable
	size_t	word_count;

	array = 0;
	i = 0;
	j = 0;

	//allocating 2D_Array
					// 2d array is full of pointers, allocate space for all pointers
	array = ft_strnew(ft_char_count(s, c) + ft_word_count(s, c));
	//
	//loop for making each string
	//while (i != ft_word_count(s, c))
	//{
	//	new_string[j] = ft_strnew();
	//	j++;
	//}



	printf("ft_word_count:%zu\n", ft_word_count(s, c));
	printf("ft_char_count:%d\n\n", ft_char_count(s, c));
	return (array);
}

int	ft_char_count(const char *s, char c)
{
	size_t	i;
	int		char_count;

	char_count = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
			char_count++;
		i++;
	}
	return (char_count);
}

size_t	ft_word_count(const char *s, char c)
{
	size_t	i;
	int		is_word;
	size_t	word_count;

	i = 0;
	word_count = 0;
	is_word = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		if (s[i] == '*')
			is_word = 0;
		i++;
	}
	return (word_count);
}
