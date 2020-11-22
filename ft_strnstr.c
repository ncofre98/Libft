/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:20:33 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/21 23:18:03 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
	This function locates the first ocurrence of the NULL-terminated string s2
	in the string s1, where not more than n characters are searched. Characters
	that appear after a '\0' character are not searched.

	If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1, NULL
	is returned; otherwise a pointer to the first character of the first
	occurrence of s2 is returned.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char *f_letter;
	char str[n];
	size_t i;

	if (!*s2)
		return ((char*)&(s1[0]));
	i = 0;
	while (i < n)
	{
		str[i] = s2[i];
		i++;
	}
	str[i] = '\0';
	f_letter = ft_strchr(s1, str[0]);
	while (*f_letter)
	{
		if (ft_strncmp(f_letter, str, ft_strlen(str)) == 0)
			return (f_letter);
		else
			f_letter = ft_strchr(f_letter, str[0]);
	}
	return (NULL);
}

int	main(void)
{
	char s1[] = "El gato blanco Solovino :3";
	char s2[] = "Solovino";

	printf("%s\n", ft_strnstr(s1, s2, sizeof(s2) - 1));
	return (0);
}
