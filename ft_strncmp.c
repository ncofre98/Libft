/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:38:01 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/19 22:39:19 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This function compares at most the first n bytes of str1 and str2.
	If return value < 0 then it indicates str1 is less than str2.
	If return value > 0 then it indicates str2 is less than str1.
	If return value = 0 then it indicates str1 is equal to str2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
