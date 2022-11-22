/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:05:55 by yallo             #+#    #+#             */
/*   Updated: 2022/11/22 16:30:46 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] != '\0' || i >= 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	return (NULL);
}

/*int main(void)
{
	char str[] = "tripouille";
	puts(ft_strrchr(str, 't'));
	return (0);
}*/