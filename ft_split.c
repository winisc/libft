/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:46:36 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/19 01:38:19 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (len);
}

char	**free_spl(char **spl)
{
    size_t	i = 0;

    if (!spl)
        return (NULL);
    while (spl[i])
    {
        free(spl[i]);
        i++;
    }
    free(spl);
    return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	i;
	size_t	start;
	size_t	j;

	spl = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
        if (i > start)
        {
            spl[j] = ft_substr(s, start, i - start);
            if (!spl[j++])
                return (free_spl(spl));
        }
	}
	spl[j] = NULL;
	return (spl);
}
