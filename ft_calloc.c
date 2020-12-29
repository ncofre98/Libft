/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:07:25 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/28 23:37:53 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function allocates memory for an array of nmemb elements of size bytes
**each and returns a pointer to the allocated memory. The memory is set to
**zero. If nmemb or size is 0, then ft_calloc() returns either NULL, or a
**unique pointer value that can later be successfully passed to free().
*/

void			*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;
	long int	total_size;

	total_size = nmemb * size;
	if (!(ptr = malloc(total_size)))
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
