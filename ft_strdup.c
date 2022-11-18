/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:34:48 by yallo             #+#    #+#             */
/*   Updated: 2022/11/18 10:48:54 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*buf;

	i = 0;
	buf = malloc(sizeof(char) * ft_strlen(str));
	while (str[i])
	{
		buf[i] = str[i];
		i++;
	}
	return (buf);
}
