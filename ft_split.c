/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:58:30 by yallo             #+#    #+#             */
/*   Updated: 2022/12/02 17:21:36 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			if (s[i + 1] == c || s[i + 1] == '\0')
				count++;
		i++;
	}
	return (count);
}

int	get_len_word(const char *s, char c, int start)
{
	int	i;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	return (i - start);
}

int	nbr_delimiter(char const *s, char c, int index)
{
	int i;

	i = index;
	while (s[i] == c)
		i++;
	return (i);
}

void	fill_array(char const *s, char c, char **array)
{
	int	index;
	int	start;
	int	len;

	index = 0;
	while (index < count_nbr_word(s, c))
	{
		array[index] = ft_substr(s, start, len);
		start = start + len + nbr_delimiter(s, c, start + len);
		len = get_len_word(s, c, start);
		
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * count_nbr_word(s, c) + 1);
	if (!array)
		return (NULL);
	fill_array(s, c, array);
	array[count_nbr_word(s, c)] = NULL;
	return (array);
}

int main(void)
{
	int i = 0;
	char *s = "Bonjour    les gars";
	char c = ' ';
	char **res;
	
	res = ft_split(s, c);
	while (i <= count_nbr_word(s, c))
	{
		printf("%s\n", res[i]);
		i++;
	}
}

/*int	main(void)
{
	int i = 0;
	char *s = "abc def ghi";
	char c = " ";
	char **res;

	fill_array(s, c, res);
	while (i <= count_nbr_word(s, c))
	{
		printf("%s\n", res[i]);
		i++;
	}
}

int main(void)
{
	char *s = " bonjour les gars";
	printf("%d\n", count_nbr_word(s, ' '));
}*/