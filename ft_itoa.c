/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:21:17 by ncofre            #+#    #+#             */
/*   Updated: 2020/12/18 09:12:04 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_countdigits(int n)
{
	int				i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*ptr;
	int				size;
	int				stop;
	unsigned int	pten;

	pten = 1;
	size = ft_countdigits(n) + 1;
	stop = 0;
	ptr = (char*)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		*ptr = '-';
		n *= -1;
		stop = 1;
	}
	ptr[--size] = '\0';
	while (--size >= stop)
	{
		ptr[size] = ((n / pten) % 10) + '0';
		pten *= 10;
	}
	return (ptr);
}
