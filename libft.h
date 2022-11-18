/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:16:47 by yallo             #+#    #+#             */
/*   Updated: 2022/11/18 11:08:00 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
#include <stdlib.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *src, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memset(void *src, int value, size_t len);
size_t			ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t			ft_strlen(char *s);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_memcpy(void *dst, const void *src, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strchr(char *s ,int c);
char			*ft_strrchr(char *s, int c);
size_t			ft_strlcat(char *dst, char *src, size_t dstsize);

#endif