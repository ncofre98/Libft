/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 10:29:26 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/13 11:39:44 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
	This function copy strings, unlike ft_strncpy(), it takes the full size of
	the buffer (not just the length) and guarantee to NULL-terminate the result
	(as long as size is larger than 0). Note that a byte for the NULL should be
	included in size. Also note that ft_strlcpy() only operates on true "C"
	strings. This means that for this function src must be NULL-terminated.

	The ft_strlcpy() function copies up to size - 1 characters from the
	NULL-terminated string src to dst, NULL-terminating the result.

	The ft_strlcpy() returns the total length of the string they tried to
	create. For this function it means the length of src.
*/

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t src_length;

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	src_length = ft_strlen(src);
	return (src_length);
}

size_t ft_strlcpy2(char *dst, const char *src, size_t size)
{
	size_t src_size;

	if (!dst || !src)
		return (0);
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (src_size);
}


int	main(void)
{
	char src[] = "Nestor";
	char dst[] = "";
	int n;

	printf("Size of destination\t%lu\n", sizeof(dst));
	printf("%s\n", dst);
	n = ft_strlcpy(dst, src, 3);
	printf("%s\n", dst);
	printf("%i\n", n);
	printf("Size of destination\t%lu\n", sizeof(dst));
	return (0);
}
