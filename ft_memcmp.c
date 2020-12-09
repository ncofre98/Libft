/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 23:45:43 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/08 20:03:03 by ncofre           ###   ########.fr       */
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
	int i;
	int s1_n;
	int s2_n;

	i = 0;
	s1_n = 0;
	s2_n = 0;
	while (i < n)
	{
		s1_n += *(char*)(s1 + i);
		s2_n += *(char*)(s2 + i);
		i++;
	}
	return (s1_n - s2_n);
}
