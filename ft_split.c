/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:46:36 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/23 23:52:26 by wini             ###   ########.fr       */
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
		if (str[i] != c)
		{
			len++;
			i++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (len);
}

static char	**free_spl(char **spl)
{
	size_t	i;

	i = 0;
	if (!spl)
		return (NULL);
	while (spl[i])
		free (spl[i++]);
	free (spl);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	i;
	size_t	start;
	size_t	word;

	spl = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!spl)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			spl[word] = ft_substr(s, start, i - start);
			if (!spl[word++])
				return (free_spl(spl));
		}
	}
	return (spl);
}
