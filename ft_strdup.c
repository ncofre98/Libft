/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:21:39 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/24 22:07:49 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This function returns a pointer to a new string which is a duplicate of the
	string s. Memory for the new string is obtained with malloc, and can be
	freed with free.

	On success, this functions returns a pointer to the duplicated string.
	It returns NULL if insufficient memory was available, with errno set to
	indicate the cause of the error.
*/

char	*ft_strdup(const char *s)
{
	char *ptr;
	size_t str_size;

	str_size = ft_strlen(s) + 1;
	ptr = (char*)malloc(str_size);
	if (!ptr)
		return (NULL);
	else
	{
		ft_memcpy(ptr, s, str_size);
		return (ptr);
	}
}
