/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:52:22 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/18 16:53:41 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	size_t			max_len;

	if (len == 0 || !s[0] || start > ft_strlen(s))
		return (ft_strdup(""));
	max_len = ft_strlen(s) - start;
	if (len < max_len)
		max_len = len;
	str = (char *) malloc ((max_len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		str[j++] = s[i];
		i++;
	}
	str[j] = 0;
	return (str);
}
