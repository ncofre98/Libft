/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 20:33:28 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/07 23:35:44 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This function fills the first n bytes of the memory area
	pointed to by s with the constant byte c
*/

void	*ft_memset(void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(char*)(s + i) = c;
		i++;
	}
}
