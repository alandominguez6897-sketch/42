/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:46:28 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 13:01:40 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_size;
	size_t	s_size;

	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	i = 0;
	j = 0;
	if (d_size >= size)
		return (size + s_size);
	while (dst[i] != '\0')
		i++;
	while (j < (size - i) - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (d_size + s_size);
}

/* #include <stdio.h>

int	main(void)
{
	char	test[20] = "Testhello";
	char	src[9] = "pourvoir";

	printf("%zu\n", ft_strlcat(test, src, 16));
	printf("%s\n", test);
} */
