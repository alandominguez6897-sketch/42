/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:22:13 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:01:14 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occ;

	i = 0;
	last_occ = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
			last_occ = (char *) &s[i];
		i++;
	}
	if ((char) c == '\0')
		return ((char *) &s[i]);
	return (last_occ);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strrchr("Je suis quelque chose", 's'));
} */
