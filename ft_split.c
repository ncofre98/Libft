/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:09:55 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/28 15:42:18 by ncofre           ###   ########.fr       */
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

static size_t	ft_nsentences(char const *s, char const c)
{
	size_t count;
	size_t n;

	count = 0;
	n = 0;
	while (*s)
	{
		if (*s != c)
			count++;
		if ((*s++ == c && count > 0) || (!*(s + 1) && count > 0))
		{
			n++;
			count = 0;
		}
	}
	return (n);
}

static size_t	ft_substrlen(char const *start, char const *end)
{
	size_t	i;

	i = 0;
	while (*start && end != NULL)
	{
		if (start++ == end)
			return (i);
		i++;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	i;
	int	len;

	size = ft_nsentences(s, c) + 1;
	if (!(arr = (char**)malloc(sizeof(char**) * size--)))
		return (NULL);
	i = 0;
	while (*s && i < size)
		if (*s == c)
			s++;
		else
		{
			if ((len = ft_substrlen(s, ft_strchr(s, c))) == 0)
				len = ft_substrlen(s, ft_strchr(s, '\0')) + 1;
			arr[i++] = ft_substr(s, 0, len);
			s += len + 1;
		}
	arr[i] = NULL;
	return (arr);
}
