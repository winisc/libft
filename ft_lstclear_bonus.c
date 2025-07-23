/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:57:47 by wsilveir          #+#    #+#             */
/*   Updated: 2025/07/22 13:05:11 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n_node;

	while (*lst)
	{
		n_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = n_node;
	}
	*lst = NULL;
}
