/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:20:33 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/24 00:34:22 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function locates the first ocurrence of the NULL-terminated string s2
**in the string s1, where not more than n characters are searched. Characters
**that appear after a '\0' character are not searched.
**
**If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1, NULL
**is returned; otherwise a pointer to the first character of the first
**occurrence of s2 is returned.
*/

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (!*s2 || !s2)
		return ((char*)&*s1);
	len = ft_strlen(s2);
	while (*s1 && n >= len)
	{
		if (*s1 == s2[0])
			if (ft_strncmp(s1, s2, len) == 0)
				return ((char*)&*s1);
		s1++;
		n--;
	}
	return (NULL);
}
