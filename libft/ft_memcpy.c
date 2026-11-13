/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:41:51 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:00:14 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) dest;
	b = (unsigned char *) src;
	while (n--)
		*a++ = *b++;
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	unsigned char	dest[20] = "TEST";
	unsigned char	src[20] = "OUI";

	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
} */
