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
	ft_putchar('\n');
}

int	main(void)
{
	char		c;
	const char	*s1 = "*Hello*fellow***students*";
	char const *s2 = "      Hello";
	char const *s3 = "    	Good    day    Hivers ";
	char const *s4 = "      split      this for   me       ";  
	size_t		i;
	char		**arr1;
	char		**arr2;
	char		**arr3;
	char		**arr4;
	i = 0;
	c = '*';
	arr1 = ft_strsplit(s1, c);	
	ft_print_array(arr1, s1, c);

	c = ' ';
	arr2 = ft_strsplit(s2, c);
	ft_print_array(arr2, s2, c);

	c = ' ';
	arr3 = ft_strsplit(s3, c);
	ft_print_array(arr3, s3, c);

	c = ' ';
	arr4 = ft_strsplit(s4, c);
	ft_print_array(arr4, s4, c); 
}	
