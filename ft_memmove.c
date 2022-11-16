/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:09:06 by yallo             #+#    #+#             */
/*   Updated: 2022/11/16 15:41:37 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*src2;
	unsigned char	*dst2;

	i = 0;
	src2 = (unsigned char *) src;
	dst2 = (unsigned char *) dst;
	temp = src2;
	i = 0;
	while (i < len)
	{
		dst2[i] = temp[i];
		i++;
	}
	return (dst);
}

int main(void)
{
	char src[] = "lorem ipsum dolor sit amet";
	char dst[8];
	ft_memmove(dst, src, 8);
	printf("%s", dst);
	return (0);
}