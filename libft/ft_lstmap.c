/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:01:42 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:54:57 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*trip;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_lstclear(&new, del), NULL);
		trip = ft_lstnew(content);
		if (!trip)
			return (del(content), ft_lstclear(&new, del), NULL);
		ft_lstadd_back(&new, trip);
		lst = lst->next;
	}
	return (new);
}

/* int	main(void)
{
	t_list	lst;
} */
