/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:45:25 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/19 14:12:23 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	ld;
	int		rd;
	int		ne;

	ne = 0;
	ld = n % 10;
	rd = n / 10;
	if (ld < 0)
	{
		ld = ld * -1;
		ne = 1;
	}
	ld = ld + '0';
	if (rd != 0)
		ft_putnbr_fd (rd, fd);
	else
	{
		if (ne == 1)
			write (fd, "-", 1);
	}
	write (fd, &ld, 1);
}
