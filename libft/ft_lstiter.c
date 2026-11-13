/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:00:03 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:25:04 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*trip;

	trip = ft_lstnew(NULL);
	trip->next = lst;
	while (trip->next->next)
	{
		f(trip->next->content);
		trip->next = trip->next->next;
	}
}
