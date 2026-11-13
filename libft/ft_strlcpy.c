/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:06:12 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 15:12:03 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen(src);
	if (size <= 0)
		return (src_size);
	i = size - 1;
	while (i-- && (size - 1) - i <= src_size)
		*dst++ = *src++;
	*dst = '\0';
	return (src_size);
}

/* #include <stdio.h>

int	main(void)
{
	char	test[20] = "test";
	char	src[20] = "noee";
	printf("%d\n", (int) ft_strlcpy(test, src, ft_strlen(test) + 1));
	printf("%s\n", test);
} */
