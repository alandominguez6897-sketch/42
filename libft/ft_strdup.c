/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:15:23 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:00:46 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*memory;

	i = -1;
	size = ft_strlen(s);
	memory = malloc ((size + 1) * sizeof(char));
	if (!memory)
		return (NULL);
	while (s[++i])
		memory[i] = s[i];
	memory[i] = '\0';
	return (memory);
}
