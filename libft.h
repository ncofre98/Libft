/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncofre <ncofre@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 09:49:00 by ncofre            #+#    #+#             */
/*   Updated: 2020/11/07 23:50:18 by ncofre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/* Libc functions*/

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n); */
/* void	*ft_memcpy(void *dest, const void *src, size_t n); */
/* void	*ft_memccpy(void *dest, const void *src, int c, size_t n); */
/* void	*ft_memmove(void *dest, const void *src, size_t n); */
/* void	*ft_memchr(const void *s, int c, size_t n); */
/* int		ft_memcmp(const void *s1, const void *s2, size_t n); */
size_t	ft_strlen(const char *s);
/* size_t	ft_strlcpy(char *dst, const char *src, size_t size); */
/* size_t	ft_strlcat(char *dst, const char *src, size_t size); */
/* char	*ft_strchr(const char *s, int c); */
/* char	*ft_strrchr(const char *s, int c); */
/* char	*ft_strnstr(const char *s1, const char *s2, size_t n); */
/* int	ft_strncmp(const char *s1, const char *s2, size_t n); */
int	ft_atoi(const char *nptr);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

/* Malloc functions */
/* void	*ft_calloc(size_t nmemb, size_t size); */
/* char 	*ft_strdup(const char *s); */

/* Part 2 - Additional functions */
/* char 	*ft_substr(char const *s, unsigned int start, size_t len); */
/* char 	*ft_strjoin(char const *s1, char const *s2); */
/* char	*ft_strtrim(char const *s1, char const *set); */
/* char	**ft_split(char const *s, char c); */
/* char	*ft_itoa(int n); */
/* char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); */
/* void	ft_putchar_fd(char c, int fd); */
/* void	ft_putstr_fd(char *s, int fd); */
/* void	ft_putendl_fd(char *s, int fd); */
/* void	ft_putnbr_fd(int n, int fd); */
