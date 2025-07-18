/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:53:30 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/17 21:14:49 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	void		*ptr;

	if (!nmemb || !size)
		return ((char *)malloc(1));
	if (size != 0 && nmemb * size / size != nmemb)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < nmemb * size)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
