/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 21:37:28 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/11 21:40:15 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function iterates the list lst and applies the function f to the content
**of each element.
**Parameters:
**#1. The address of a pointer to an element.
**#2. The address of the function used to iterate on the list.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *current;

	current = lst->next;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
