/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:43:59 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/16 16:15:41 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	lenght(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		ne;
	int		len;
	int		num;
	char	*str;

	len = lenght(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = 0;
	ne = (n < 0);
	while (len > 0)
	{
		num = n % 10;
		if (ne)
			num = -num;
		str[--len] = num + '0';
		n = n / 10;
	}
	if (ne)
		str[0] = '-';
	return (str);
}
