/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:13:51 by yallo             #+#    #+#             */
/*   Updated: 2022/11/16 13:39:37 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int value, size_t len)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *) src;
	i = 0;
	while (i < len)
	{
		buf[i] = value;
		i++;
	}
	return (src);
}
