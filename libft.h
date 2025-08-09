/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:13:13 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/08 19:24:37 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

void	*ft_memset(void *str, int c, size_t n);
int		ft_isalnum(int numc);
int		ft_isalpha(int n);
int		ft_isascii(int c);
int		ft_isdigit(int num);
int		ft_isprint(int prt);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	ft_tolower(char c);
char	ft_toupper(char c);
char	*ft_strchr(const char *string, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *string);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif