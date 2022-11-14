/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:09:06 by yallo             #+#    #+#             */
/*   Updated: 2022/11/14 16:33:11 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	char temp[len];
	char *src2, *dst2;

	i = 0;
	src2 = (char *) src;
	dst2 = (char *) dst;
	while(i < len)
	{
		temp[i] = src2[i];
		dst2[i] = temp[i];
		printf("%d : %c %c %c\n", i, src2[i], temp[i], dst2[i]);
		i++;
	}
	puts(dst2);
	return (dst);
}

int main ()
{
  char src[] = "bonbon...";
  ft_memmove (src+6, src+3, 3);
  return 0;
}