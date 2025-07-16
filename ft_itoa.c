/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:30:54 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/15 23:40:30 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    int     len;
    int     number;
    char    *str;

    if (n == 0)
        return ("0");
    len = 0;
    number = n;
    while (number > 0)
    {
        number = number / 10;
        len++;
    }
    str = (char *)malloc(len * sizeof(char) + 1);
    if (!str)
        return (0);
    str[len] = 0;
	while (len > 0)
	{
        number = n % 10;
        str[--len] = number + '0';
        n = n/10;
	}
    return (str);
}
