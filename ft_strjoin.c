/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:05:00 by yallo             #+#    #+#             */
/*   Updated: 2022/11/23 15:14:48 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *buf;

    buf = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!(buf))
        return (NULL);
    ft_strlcat(buf, s1 ,ft_strlen(buf));
    ft_strlcat(buf, s2, ft_strlen(buf));
    return (buf);
}