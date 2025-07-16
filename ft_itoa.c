/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:30:54 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/16 00:48:04 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int length(int num)
{
    int i;

    i = 0;
    if (num < 0)
        i++;
    while (num != 0)
    {
        num = num / 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    int     ne;
    int     len;
    int     num;
    char    *str;

    if (n == 0)
        return ("0");
    len = length(n);
    str = (char *)malloc(len * sizeof(char) + 1);
    if (!str)
        return (0);
    str[len] = 0;
    ne = (n < 0);
	while (len > 0)
	{
        num = n % 10;
        if (ne)
            num = - num;
        str[--len] = num + '0';
        n = n/10;
	}
    if (ne)
        str[0] = '-';
    return (str);
}
