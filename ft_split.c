/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:09:55 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/26 21:14:59 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocates with malloc and returns an array of strings obtained by splitting
	s using the character c as delimiter. The array must be ended by a
	NULL pointer.

	Returns NULL if the allocation fails.
*/

static size_t	ft_ncharinstr (char const *s, char const c)
{
	size_t n;

	n = 0;
	while (*s)
	{
		if (*s == c)
			n++;
		*s++;
	}
	return (n);
}

static size_t	ft_substrlen (char const *start, char const *end)
{
	size_t i;

	i = 0;
	while (*start)
	{
		if (start == end)
			return (i);
		i++;
		*start++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int n_strpointers;
	unsigned int i;
	unsigned int size;
	char **array;
	char *start;
	char *end;

	i = 0;
	n_strpointers = ft_ncharinstr(s, c) + 2;
	array = (char**)malloc(sizeof(char*) * n_strpointers);
	start = (char*)&s[0];
	end = ft_strchr(start, c) - 1;
	while (i - n_strpointers - 1)
	{
		size = ft_substrlen(start, end) + 2;
		array[i] = (char*)malloc(sizeof(char) * size);
		ft_strlcpy(array[i], start, size);
		if (i == n_strpointers - 2)
		{
			i++;
			break;
		}
		start = ft_strchr(start, c) + 1;
		end = ft_strchr(start, c) - 1;
		i++;
		if (i  == n_strpointers - 2)
			end = ft_strchr(start, '\0') - 1;
	}
	array[i] = NULL;
	return (array);
}
