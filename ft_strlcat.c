/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:38:11 by yallo             #+#    #+#             */
/*   Updated: 2022/11/22 15:50:18 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
    size_t i;
	size_t size_s;
    size_t size_d;

    i = 0;
    size_s = ft_strlen(src);
    size_d = ft_strlen(dst);

	while (i < dstsize - size_d - 1)while (i < dstsize - size_d - 1)
		{
			dst[i + size_d] = src[i];
			i++;
		}
	{
		dst[i + size_d] = src[i];
		i++;
	}
	dst[i + size_d] = '\0';
	return (size_s + size_d);
}

int main(void)
{
	char dst[14] = "Bonjour lamis";
	printf("\n%zu", ft_strlcat(dst, "lorem ipsum dolor sit amet", 15));
	return (0);
}