/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:07:02 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/04 14:22:00 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return ((char *) &s[i]);
	if (s[i] == '\0' && c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strchr("Find character in string", 'c'));
} */
