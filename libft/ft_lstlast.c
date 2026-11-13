/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:52:12 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:21:14 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*trip;

	trip = ft_lstnew(NULL);
	trip->next = lst;
	while (trip->next->next)
		trip->next = trip->next->next;
	return (trip->next);
}
