/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 21:07:21 by ncofre            #+#    #+#             */
/*   Updated: 2021/01/02 01:07:06 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function scans the initial n bytes of the memory area pointed to by s
**for the first instance of c. Both c and the bytes of the memory area
**pointed to by s are interpreted as unsigned char.
**
**This function returns a pointer to the matching byte or NULL if the
**character does not occur in the given memory area.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return ((void*)(((unsigned char*)s) + i));
		else
			i++;
	}
	return (NULL);
}
