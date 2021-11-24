/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:18:05 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/24 13:02:13 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
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

static size_t	ft_char_count(const char *s, char c)
{
	size_t	i;
	size_t	char_count;

	char_count = 0;
	i = 0;
	while (s[i] != c)
	{
		char_count++;
		i++;
	}
	return (char_count);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	arr = (char **)malloc(sizeof(char *) * ft_word_count(s, c) + 1);
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			arr[j] = (char *)malloc(sizeof(char) * ft_char_count(&s[i], c) + 1);
			while (s[i] != c && s[i] != 0)
			{
				arr[j][k] = s[i];
				k++;
				i++;
			}
			arr[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	return (arr);
}
