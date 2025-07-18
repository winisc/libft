/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:46:36 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/18 18:50:20 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (i == 0 && str[i] != c)
			len++;
		if ((str[i] != c && str[i - 1] == c))
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = count_words(s, c);
	spl = malloc((j + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			spl[j++] = ft_substr(s, start, i - start);
	}
	spl[j] = NULL;
	return (spl);
}
