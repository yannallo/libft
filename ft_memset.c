/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:13:51 by yallo             #+#    #+#             */
/*   Updated: 2022/11/14 13:13:42 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *src, int value, unsigned int len)
{
	int				i;
	unsigned char	*buf;

	buf = (unsigned char *) src;
	i = 0;
	while (i < len)
	{
		buf[i] = (unsigned char) value;
		i++;
	}
	return (src);
}
