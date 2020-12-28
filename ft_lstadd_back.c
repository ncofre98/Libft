/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 22:02:48 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/27 23:40:13 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function adds the element new at the end of the list.
**Parameters:
**#1. The address of a pointer to the first link of a list.
**#2. The address of a pointer to the element to be added to the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		ft_lstadd_front(lst, new);
	else
	{
		ft_lstlast(*lst)->next = new;
		new->next = NULL;
	}
}
