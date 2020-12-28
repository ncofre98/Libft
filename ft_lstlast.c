/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:49:58 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/27 23:00:52 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function returns the last element of the list.
**Parameters: #1. The beginning of the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	while ((lst != NULL) & (lst->next != NULL))
		lst = lst->next;
	return (lst);
}
