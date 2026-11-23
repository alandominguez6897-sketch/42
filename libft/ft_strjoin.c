/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:19:05 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:26:34 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*final_string;
	int		i;
	int		j;

	final_string = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!final_string)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		final_string[++j] = s1[i];
	i = -1;
	while (s2[++i])
		final_string[++j] = s2[i];
	final_string[++j] = '\0';
	return (final_string);
}
