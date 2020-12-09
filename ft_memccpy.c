/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:47:10 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/08 20:04:09 by ncofre           ###   ########.fr       */
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

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		if (*(char*)(dest + i) == c)
			return (dest + i + 1);
		else
			i++;
	}
	return (NULL);
}
