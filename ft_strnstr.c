/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:21:30 by yallo             #+#    #+#             */
/*   Updated: 2022/11/22 12:55:39 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != '\0' && i < size)
	{
		j = 0;
		while (str[i + j] == needle[j])
			j++;
		if (j == ft_strlen(needle) && i + j < size)
			return (str + i);
		i++;
	}
	return (NULL);
}
