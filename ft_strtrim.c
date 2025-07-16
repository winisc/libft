/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:30:25 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/16 18:08:13 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_end_trim(char const *s1, char const *set)
{	
	int	i;
	int	j;
	int	end;
	int	len;

	len = 0;
	end = 0;
	i = ft_strlen(s1);
	while (i > 0)
	{
		i--;
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				end++;
			j++;
		}
		if (len == end)
			break ;
		len = end;
	}
	return (len);
}

size_t	len_start_trim(char const *s1, char const *set)
{	
	int	i;
	int	j;
	int	start;
	int	len;

	len = 0;
	i = 0;
	start = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				start++;
			j++;
		}
		if (len == start)
			break ;
		len = start;
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = len_start_trim(s1, set);
	end = len_end_trim(s1, set);
	len = ft_strlen(s1);
	if (start + end >= len)
		return (ft_strdup(""));
	str = malloc((len - start - end + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, len - start - end + 1);
	return (str);
}
