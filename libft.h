/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:16:47 by yallo             #+#    #+#             */
/*   Updated: 2022/11/14 13:26:03 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *src, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				isprint(int c);
void			*ft_memset(void *src, int value, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif