/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:24:46 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/14 16:48:22 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	i = 0;
	while (src[i])
		i++;
	size_src = i;
	if (!size)
		return (size_src);
	i = 0;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (size_src);
}
