/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:47:10 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/29 00:54:18 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function copies no more than n bytes from memory area src to memory
**area dest, stopping when the character c is found.
**
**If the memory areas overlap, the results are undefined.
**
**This function returns a pointer to the next character in dest after c, or
**NULL if c was not found in the first n characters of src.
*/

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	l;

	i = 0;
	l = (unsigned char)c;
	while (i < n)
	{
		*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
		if (*(unsigned char*)(dest + i) == l)
			return ((unsigned char*)dest + i + 1);
		else
			i++;
	}
	return (NULL);
}
