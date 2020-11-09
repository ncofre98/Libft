/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 00:20:22 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/09 11:23:11 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This function copies n bytes from memory area src to memory area dest.
	The memory areas may overlap: copying takes place as though the bytes
	in src are first copied into a temporary array that does not overlap
	src or dest, and the bytes are then copied from the temporary array to
	dest and returns a pointer to dest
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	char temp_array[n];

	i = 0;
	while(i < n)
	{
		temp_array[i] = *(char*)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char*)(dest + i) = temp_array[i];
		i++;
	}
	return (dest);
}
