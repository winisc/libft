/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:52:22 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/16 17:58:26 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (len == 0 || !s[0])
	{
		str = (char *) malloc (sizeof(char));
		if (!str)
			return (NULL);
		return (str[0] = 0, str);
	}
	str = (char *) malloc (len * sizeof(char));
	if (!str)
		return (0);
	i = start;
	j = 0;
	while (j < len)
	{
		str[j++] = s[i];
		i++;
	}
	return (str);
}
