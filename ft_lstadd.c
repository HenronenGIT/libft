/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:16:23 by hmaronen          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/11/29 10:58:31 by hmaronen         ###   ########.fr       */
=======
/*   Updated: 2021/11/26 17:17:23 by hmaronen         ###   ########.fr       */
>>>>>>> 0858efeeb31398bd6f36a9a623b288c1fc742cf5
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
/* Adds the element new at the beginning of the list. */

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
=======
/*
Adds the element new at the beginning of the list.
*/

void ft_lstadd(t_list **alst, t_list *new)
{
    new->next = *alst;
    (*alst)->next = NULL;

>>>>>>> 0858efeeb31398bd6f36a9a623b288c1fc742cf5
}
