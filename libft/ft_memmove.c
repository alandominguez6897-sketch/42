/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:42:42 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 13:59:53 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) dest;
	b = (unsigned char *) src;
	if (a < b)
		return (ft_memcpy(a, b, n));
	while (n--)
		a[n] = b[n];
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	unsigned char	dest[20] = "HELLO";
	unsigned char	src[20] = "YES";

	ft_memmove(dest, src, 3);
	printf("%s\n", dest);
} */
