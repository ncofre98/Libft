/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 22:19:45 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/29 00:40:57 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates with malloc and returns a substring from the string s.
**The substring begins at index start and is of maximum size len.
**
**Returns NULL if the allocation fails.
*/

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	end;
	unsigned int	i;

	if (!(ptr = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (start >= ft_strlen(s))
		ft_bzero(ptr, len + 1);
	else
	{
		i = 0;
		end = start + len - 1;
		while (start <= end && len > 0)
		{
			ptr[i] = s[start];
			i++;
			start++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
