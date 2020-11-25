/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 00:16:15 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/25 15:03:49 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocates with malloc and returns a copy of s1 with the characters specified
	in set removed from the beginning and the end of the string.

	Returns NULL if the allocation fails.
*/

static int	ft_inarray(const char c, const char *array)
{
	while (*array)
	{
		if (c == *array)
			return (1);
		*array++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t size;
	size_t start;
	size_t end;

	i = 0;
	size = 0;
	while (s1[i] && ft_inarray(s1[i], set) == 1)
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (s1[i] && ft_inarray(s1[i], set) == 1)
		i--;
	end = i;
	size = end - start + 1;
	return (ft_substr(s1, start, size));
}
