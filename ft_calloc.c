/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:03:32 by yallo             #+#    #+#             */
/*   Updated: 2022/11/22 12:02:46 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*buf;

	if (count * size < SIZE_MAX)
	{
		buf = malloc(count * size);
		if (!(buf))
			return (NULL);
		ft_bzero(buf, size);
	return (buf);
	}
	return (0);
}
