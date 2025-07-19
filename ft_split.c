/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:46:36 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/18 21:11:31 by wsilveir         ###   ########.fr       */
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
			while (str[i] != c)
				i++;
		}
		else
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

	spl = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i]) //abc;abc;abc;abc;
	{
		start = i;
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			spl[j++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	spl[j] = NULL;
	return (spl);
}

// int main()
// {
// 	char * * tab;
// 	char * splitme = strdup("Tripouille");
// 	tab = ft_split(splitme, ' ');
// 	return 0;
// }