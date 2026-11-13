/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:58:21 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:26:05 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next)
	{
		*lst = (*lst)->next;
		ft_lstclear(lst, del);
		del(*lst);
		free(*lst);
	}
	lst = NULL;
}
