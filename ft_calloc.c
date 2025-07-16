/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:53:30 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/16 10:31:32 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	void		*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (((int *)ptr)[i])
		((int *)ptr)[i++] = 0;
	return (ptr);
}
