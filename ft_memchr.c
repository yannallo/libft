/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:33:26 by yallo             #+#    #+#             */
/*   Updated: 2022/11/22 15:50:49 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *haystack, int needle, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)haystack;
	while (i < size)
	{
		if (str[i] == needle)
			return (str + i);
		i++;
	}
	return (NULL);
}