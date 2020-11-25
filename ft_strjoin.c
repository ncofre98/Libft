/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 23:15:18 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/25 00:05:34 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;
	size_t size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char*)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_strlcat(ptr, s2, ft_strlen(s2) + 1);
	return (ptr);
}
