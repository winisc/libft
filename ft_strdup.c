/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 20:00:18 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/14 20:26:36 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
