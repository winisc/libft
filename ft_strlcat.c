/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 17:28:45 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/09 17:28:46 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	i = 0;
	while (dest[i])
		i++;
	size_dest = i;
	i = 0;
	while (src[i])
		i++;
	size_src = i;
	i = 0;
	if (size <= size_dest)
		return (size_src + size);
	while (i < (size - size_dest - 1) && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
