/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:18:12 by hmaronen          #+#    #+#             */
/*   Updated: 2021/11/24 17:07:56 by hmaronen         ###   ########.fr       */
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

void	ft_print_array(char **arr, const char *s, char c)
{
	size_t	i;

	i = 0;
	while (i != ft_word_count(s, c))
	{
		printf("%s\n",arr[i]);
		i++;
	}
}

int	main(void)
{
	char	**arr;
	//char	**arr2;
	char	**arr3;
	//char	**arr4;
	size_t		i;

	i = 0;
	arr = ft_strsplit("*Hello*fellow***students*", '*');	
	while (i != ft_word_count("*Hello*fellow***students*", '*'))
	{
		printf("%s\n", arr[i]);
		i++;
	}
	i = 0;
	printf("\n");

	//arr2 = ft_strsplit("   Good day Hivers ", ' ');
	//while (i != ft_word_count("   Good day hivers ", ' '))
	//{
	//	printf("%s\n", arr2[i]);
	//	i++;
	//}
	//i = 0;
	//printf("\n");
	char const *s1 = "      Hello";
	char c;
	c = ' ';
	arr3 = ft_strsplit(s1, c);
	ft_print_array(arr, s1, c);

	//i = 0;
	//printf("\n");
	//const char *s1 = "     split      this for   me         ";
	//arr4 = ft_strsplit(s1, ' ');
	//while(i != ft_word_count(s1, ' '))
	//{
	//	printf("%s\n", arr4[i]);
	//	i++;
	//}
}

