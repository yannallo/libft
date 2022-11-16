/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:34:32 by yallo             #+#    #+#             */
/*   Updated: 2022/11/16 13:40:41 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;
	char	*buf;
	char	*temp;

	i = 0;
	buf = (char *)dst;
	temp = (char *) src;
	while (i < size)
	{
		buf[i] = temp[i];
		i++;
	}
	return (dst);
}
