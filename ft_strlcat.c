/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:38:11 by yallo             #+#    #+#             */
/*   Updated: 2022/11/23 12:16:55 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *src, char *dst, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(dst));
	while (src[i] != '\0' && i < dstsize)
		i++;
	j = i;
	while (dst[i - j] != '\0' && i < dstsize - 1)
	{
		src[i] = dst[i - j];
		i++;
	}
	if (j < dstsize)
		src[i] = '\0';
	return (j + ft_strlen(dst));
}
