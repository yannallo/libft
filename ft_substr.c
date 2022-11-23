/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:30:40 by yallo             #+#    #+#             */
/*   Updated: 2022/11/23 15:16:49 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;

//	if (start >= ft_strlen(s))
//		return (NULL);
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	buf = malloc((len - start + 1) * sizeof(char));
	if (!(buf))
		return (NULL);
	ft_memcpy(buf, &s[start], len);
	buf[len] = '\0';
	return (buf);
}

/*int main(void)
{
	char *str2 = substr("i just want this part #############", 5, 10);
	puts(str2);
	return (0);
}*/