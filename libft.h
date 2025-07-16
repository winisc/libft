/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:33:53 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/16 14:30:17 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

size_t	ft_strlen(const char *str); //testado

int		ft_toupper(int c); //testado
int		ft_tolower(int c); //testado
int		ft_isprint(int c); //testado
int		ft_isalnum(int c); //testado
int		ft_isdigit(int c); //testado
int		ft_isalpha(int c); //testado
int		ft_isascii(int c); //testado

void	*ft_memset(void *str, int c, size_t n); //testado
void	*ft_bzero(void *str, size_t n); //testado
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n); //testado
void	*ft_memmove(void *dest, const void *src, size_t n); //testado
void	*ft_memchr(const void *s, int c, size_t n); //testado
int		ft_memcmp(const void *s1, const void *s2, size_t n); //testado

size_t	ft_strlcat(char *dest, const char *src, size_t size); //testado
size_t	ft_strlcpy(char *dest, const char *src, size_t size); //testado
char	*ft_strchr(const char *s, int c); //testado
char	*ft_strrchr(const char *s, int c); //testado
char	*ft_strnstr(const char *big, const char *little, size_t len); //testado
int		ft_strncmp(const char *s1, const char *s2, size_t n); //testado

int		ft_atoi(const char *str); //testado

char	*ft_strdup(const char *src); //testado
void	*ft_calloc(size_t nmemb, size_t size); //testado

char	*ft_substr(char const *s, unsigned int start, size_t len); //testado
char	*ft_itoa(int n); //testado
char	*ft_strjoin(char const *s1, char const *s2); //testado
char	*ft_strtrim(char const *s1, char const *set);

#endif
