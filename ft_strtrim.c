/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:45:07 by yallo             #+#    #+#             */
/*   Updated: 2022/11/28 15:46:25 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	first(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] == set[i] && i < ft_strlen(set))
		i++;
	if (i == ft_strlen(set))
		return (1);
	else
	return (0);
}

int last()
/*char	*ft_strtrim(char const *s1, char const *set)
{
	int	size_set;

	size_set = ft_strlen(set);

}*/

int main(void)
{
	printf("%d" ,first("hyLes dragibus !!!hey", "hey"));
//	puts(res);
}