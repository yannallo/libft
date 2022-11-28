/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:31:37 by yallo             #+#    #+#             */
/*   Updated: 2022/11/28 15:41:18 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*fill_array(char *buf, int n, int size)
{
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		buf[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	buf[size] = '\0';
	return (buf);
}

char	*ft_itoa(int n)
{
	int		size;
	int		sign;
	char	*buf;

	size = count(n);
	sign = 1;
	if (n < 0)
	{
		sign = -sign;
		size += 1;
		n = -n;
	}
	buf = malloc(sizeof(char) * size);
	if (!(buf))
		return (NULL);
	fill_array(buf, n, size);
	if (sign < 0)
		buf[0] = '-';
	return (buf);
}

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main(void)
{
	char *res = ft_itoa(8124);
	ft_print_result(res);
	return(0);
}*/