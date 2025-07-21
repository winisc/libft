/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <wsilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:45:25 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/21 16:59:33 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	ld;
	int		rd;
	int		ne;

	ld = n % 10;
	rd = n / 10;
	ne = (n < 0);
	if (ne)
		ld = ld * -1;
	ld = ld + '0';
	if (rd != 0)
		ft_putnbr_fd (rd, fd);
	else
	{
		if (ne)
			write (fd, "-", 1);
	}
	write (fd, &ld, 1);
}
