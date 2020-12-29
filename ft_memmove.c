/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 00:20:22 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/28 22:37:24 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function copies n bytes from memory area src to memory area dest.
**The memory areas may overlap: copying takes place as though the bytes
**in src are first copied into a temporary array that does not overlap
**src or dest, and the bytes are then copied from the temporary array to
**dest and returns a pointer to dest
*/

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	if (!dest && !src && n)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * n);
	if (tmp)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
	}
	free(tmp);
	return (dest);
}
