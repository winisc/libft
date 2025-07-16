/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:16:23 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/16 14:34:17 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_1;
	int		len_2;
	char	*str;

	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	str = (char *)malloc((len_1 + len_2 - 1) * sizeof(char));
	if (!str)
		return (0);
	len_1 = 0;
	while (s1[len_1])
	{
		str[len_1] = s1[len_1];
		len_1++;
	}
	len_2 = 0;
	while (s2[len_2])
	{
		str[len_1 + len_2] = s2[len_2];
		len_2++;
	}
	str[len_1 + len_2] = 0;
	return (str);
}
