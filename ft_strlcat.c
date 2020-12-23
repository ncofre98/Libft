/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 12:21:07 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/23 10:33:08 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function appends the NULL-terminated string src to the end of dst.
**It will apend at most size - strlen(dst) - 1 bytes, NULL-terminating the
**result.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size < dst_len)
		return (src_len + size);
	ft_strlcpy(dst + dst_len, src, size - dst_len);
	return (src_len + dst_len);
}
