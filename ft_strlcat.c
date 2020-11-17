/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:21:07 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/16 21:16:33 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This function appends the NULL-terminated string src to the end of dst.
	It will apend at most size - strlen(dst) - 1 bytes, NULL-terminating the
	result.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t end_dst;
	size_t strs_length;
	
	i = 0;
	end_dst = ft_strlen(dst);
	strs_length = ft_strlen(dst) + ft_strlen(src);
	while (i < size - 1)
	{
		dst[end_dst + i] = src[i];
		i++;
	}
	dst[end_dst + i] = '\0';
	return (strs_length);
}
