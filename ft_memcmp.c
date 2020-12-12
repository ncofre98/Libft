/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 23:45:43 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/12 15:35:07 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function compares the first n bytes (each interpreted as unsigned char)
**of the memory areas s1 and s2.
**
**This function returns an integer less than, equal to, or greater than zero
**if the first n bytes of s1 is found, respectively, to be less than,
**to match, or be greater than the first n bytes of s2.
**
**For a nonzero return value, the sign is determined by the sign of the
**difference between the first pair of bytes (interpreted as unsigned char)
**that differ in s1 and s2.
**
**If n is zero, the return value is zero.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;
	unsigned char *m1;
	unsigned char *m2;

	m1 = ((unsigned char *) s1);
	m2 = ((unsigned char *) s2);
	while (i < n && m1[i] == m2[i])
	{
		if (m1[i] != m2[i])
			return (m1[i] - m2[i]);
		i++;
	}

	return (m1[i] - m2[i]);
}
