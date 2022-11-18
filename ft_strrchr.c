/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:05:55 by yallo             #+#    #+#             */
/*   Updated: 2022/11/18 11:08:50 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(char *s, int c)
{
    int i;

    i = ft_strlen(s) + 1;
    while (i >= 0)
    {
        if (s[i] == c)
        {
            return(s+i);
        }
        i++;
    }
    return (NULL);
}


int main(void)
{
    char s[] = "abcdefedcba";
    ft_strrchr(s, 'e');
    return(0);
}   