/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:21:17 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/29 23:43:28 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char *ptr;
	int size;
	int stop;
	unsigned int pten;

	pten = 1;
	size = ft_countdigits(n) + 1;
	stop = 0;
	if (n < 0)
	{
		size++;
		ptr = (char*)malloc(sizeof(char) * size);
		*ptr = '-';
		n *= -1;
		stop = 1;
	}
	else
		ptr = (char*)malloc(sizeof(char) * size);
	ptr[--size] = '\0';
	while (--size >= stop)
	{
		ptr[size] = ((n / pten) % 10) + '0';
		pten *= 10;
	}
	return (ptr);
}
