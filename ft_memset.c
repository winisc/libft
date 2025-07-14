/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:19:30 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/12 15:53:11 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
		((unsigned char *)str)[i++] = ((unsigned char)c);
	return (str);
}
