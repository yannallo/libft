/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:38:11 by yallo             #+#    #+#             */
/*   Updated: 2022/11/18 11:08:57 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
    int i;
	int size_s;
    int size_d;

    i = 0;
    size_s = ft_strlen(src);
    size_d = ft_strlen(dst);
	if (dstsize >= size_d + size_s)
	{
		while (i < dstsize - size_d - 1)
		{
			dst[i + size_d] = src[i];
			i++;
		}
	}
    return(size_s + size_d);
}
