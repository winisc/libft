/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:53:30 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/19 16:01:59 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	void		*ptr;

	if (!nmemb || !size)
	{
		ptr = malloc(1);
		if (!ptr)
			return (0);
		return (ptr);
	}
	if (size != 0 && nmemb * size / size != nmemb)
		return (0);
	ptr = (char *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < nmemb * size)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
