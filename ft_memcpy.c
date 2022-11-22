/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:34:32 by yallo             #+#    #+#             */
/*   Updated: 2022/11/22 12:51:11 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t size)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = (char *) dst;
	src2 = (char *) src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < size)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
