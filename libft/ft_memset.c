/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:30:06 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:21:02 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *) s;
	while (n--)
		a[n] = (unsigned char) c;
	return (s);
}

// #include <stdio.h>

/* int	main()
{
	char	string[36] = {0};
	char	*result;

	result = ft_memset(string, '3', 10);
	printf("%s\n", result);
} */
