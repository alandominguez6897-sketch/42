/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:23:02 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:57:27 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_size;

	i = 0;
	j = 0;
	l_size = ft_strlen(little);
	if (!(*little))
		return ((char *) big);
	while (i < len)
	{
		if (little[j] != big[i])
			j = 0;
		else
			j++;
		if (j == l_size)
			return ((char *) &big[i - (j - 1)]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("This is a text to test.", "te", 12));
} */
