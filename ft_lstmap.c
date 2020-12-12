/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 22:02:32 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/11 22:05:55 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function iterates the list lst and applies the function f to the content
**of each element. Creates a new list resulting of the successive applications
**of the function f. The del funcion is used to delete the content of an element
**if needed.
**Parameters:
**#1. The address of a pointer to an element.
**#2. The address of the function used to iterate on the list.
**#3. The address of the function used to delete the content of an element if
**needed.
**Returns a new list or NULL if the allocation fails.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	
}
