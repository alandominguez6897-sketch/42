/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:17:11 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:26:23 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;
	int		i;
	int		j;

	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	i = start - 1;
	j = 0;
	while (s[i++] && j < (int) len)
		substring[j++] = s[i];
	substring[j] = '\0';
	return (substring);
}
