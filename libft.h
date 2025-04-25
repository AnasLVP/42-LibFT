/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouyaz <aabouyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:15:05 by aabouyaz          #+#    #+#             */
/*   Updated: 2025/04/25 16:45:49 by aabouyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int				ft_atoi(const char *nptr);
void			ft_bzero(void *s, unsigned long n);
void			*ft_calloc(unsigned long nmemb, unsigned long size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
void			*ft_memcpy(void *dest, const void *src, unsigned long n);
void			*ft_memmove(void *dest, const void *src, unsigned long n);
void			*ft_memset(void *s, int c, unsigned long n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long size);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size);
unsigned long	ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned long len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_substr(char const *s, unsigned int start,
					unsigned long len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(char const *s1, char const *set);

#endif
