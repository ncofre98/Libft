/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:09:55 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/22 00:59:51 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates with malloc and returns an array of strings obtained by splitting
**s using the character c as delimiter. The array must be ended by a
**NULL pointer.
**
**Returns NULL if the allocation fails.
*/

static size_t	ft_ncharinstr(char const *s, char const c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		if (*s++ == c)
			n++;
	}
	return (n);
}

static size_t	ft_substrlen(char const *start, char const *end)
{
	size_t	i;

	i = 0;
	while (*start)
	{
		if (start++ == end)
			return (i);
		i++;
	}
	return (i);
}

static char		*ft_findchar(const char *s, int c)
{
	char *ptr;

	ptr = ft_strchr(s, c);
	if (ptr == NULL)
		ptr = ft_strchr(s, '\0');
	return (ptr);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	char	*start;
	char	*end;
	size_t	size;
	size_t	i;

	size = ft_ncharinstr(s, c) + 2;
	if (!(arr = (char**)malloc(sizeof(char**) * size)))
		return (NULL);
	arr[--size] = NULL;
	i = 0;
	start = (char*)s;
	while (i < size)
	{
		end = ft_findchar(start, c);
		if (!(arr[i++] = ft_substr(s, ft_substrlen(s, start),
							ft_substrlen(start, end))))
			return (NULL);
		start = end + 1;
	}
	return (arr);
}
