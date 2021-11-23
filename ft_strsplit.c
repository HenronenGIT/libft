/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:18:05 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/23 10:48:22 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(const char *s, char c);
size_t	ft_char_count(const char *s, char c);

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	//allocating 2D_Array
	//	allocating space for pointers to strings.
	array =	(char **)malloc(sizeof(char *) * ft_word_count(s, c) + 1);


	//loop for "filling pointer slots"
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			array[j] = (char *)malloc(sizeof(char) * ft_char_count(&s[i], c) + 1);
			array[j][k] = //copy string 
			j++;


		}
		i++;
	}


	printf("ft_word_count:%zu\n", ft_word_count(s, c));
	return (array);
}

size_t	ft_char_count(const char *s, char c)
{
	size_t	i;
	size_t	char_count;

	printf("%s\n", s);

	i = 0;
	while (s[i] != c)
	{
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
