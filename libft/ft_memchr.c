/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:52:03 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 13:01:04 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
			return (&a[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", (char *) ft_memchr("Test", 'e', 3));
} */
