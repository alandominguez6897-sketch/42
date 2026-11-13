/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:35:00 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:02:03 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *) s;
	while (n--)
		a[n] = (unsigned char) 0;
}

/* #include <stdio.h>

int	main(void)
{
	char	test[20] = "TEST";

	ft_bzero(test, 1);
	printf("%s\n", test);
} */
