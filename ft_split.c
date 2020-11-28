/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:09:55 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/28 14:10:24 by ncofre           ###   ########.fr       */
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

/*
	This function returns a pointer to what ft_strchr returns.
	If ft_strchr gives a NULL then it returns a
	pointer to the '\0' NULL character.
*/

static char	*ft_findchar(const char *s, int c)
{
	char *ptr;

	ptr = ft_strchr(s, c);
	if (ptr == NULL)
		ptr = ft_strchr(s, '\0');
	return (ptr);
}

char	**ft_split2(char const *s, char c)
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
	end = ft_findchar(start, c) - 1;
	while (i - n_strpointers - 1)
	{
		size = ft_substrlen(start, end) + 2;
		array[i] = (char*)malloc(sizeof(char) * size);
		ft_strlcpy(array[i], start, size);
		start = ft_findchar(start, c) + 1;
		end = ft_findchar(start, c) - 1;
		i++;
	}
	array[i] = NULL;
	return (array);
}
