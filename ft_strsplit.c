/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:18:05 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/25 17:42:53 by hmaronen         ###   ########.fr       */
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
		if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (word_count);
}

static size_t	ft_char_count(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**ft_array_creator(char **arr, const char *s, char c, int i)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && s[i] != 0)
		{
			arr[j] = ft_strnew(ft_char_count(&s[i], c));
			if (!arr[j])
				return (NULL);
			while (s[i] != c && s[i] != '\0')
			{
				ft_strncpy(&arr[j][k++], &s[i], ft_char_count(&s[i], c));
				i++;
			}
			j++;
			k = 0;
		}
		else
			i++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!arr)
		return (NULL);
	ft_array_creator(arr, s, c, i);
	return (arr);
}
