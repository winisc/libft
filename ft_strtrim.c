/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:30:25 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/19 16:01:50 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char		*str;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i + 1;
	str = malloc(len);
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + i, len);
	return (str);
}
