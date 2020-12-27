/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:15:18 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/27 00:51:37 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates with malloc and returns a new string, which is the result of the
**concatenation of s1 and s2.
**
**Returns NULL if the allocation fails.
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, s1_len);
	ft_strlcat(ptr, s2, s1_len + s2_len + 1);
	return (ptr);
}
