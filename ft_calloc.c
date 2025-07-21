/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:53:30 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/21 17:18:17 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		m_size;
	void		*ptr;

	if (!nmemb || !size)
		return ((void *) ft_strdup(""));
	if (size != 0 && nmemb * size / size != nmemb)
		return (0);
	m_size = nmemb * size;
	ptr = (char *)malloc(m_size);
	if (!ptr)
		return (0);
	while (m_size > 0)
		((char *)ptr)[--m_size] = 0;
	return (ptr);
}
