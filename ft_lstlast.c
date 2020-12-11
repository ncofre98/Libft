/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:49:58 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/10 21:59:21 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function returns the last element of the list.
**Parameters: #1. The beginning of the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list *current;

	current = lst->next;
	while (current != NULL && current->next != NULL)
		current = current->next;
	return (current);
}
