/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:51:25 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:24:32 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*trip;
	unsigned int	size;

	trip = ft_lstnew(NULL);
	trip->next = lst;
	size = 0;
	while (trip->next->next)
		size++;
	return (size);
}
