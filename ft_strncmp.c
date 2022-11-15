/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:35:10 by yallo             #+#    #+#             */
/*   Updated: 2022/11/15 16:13:40 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i < n && s1 && s2)
	{
		result = result + s1 - s2;
		i++;
	}
	return (result);
}

int main(void)
{
	char s1[] = "Bonjour";
	char s2[] = "Bonsoir";
	printf("%d", ft_strncmp(s1, s2, 3));
	return (0);
}