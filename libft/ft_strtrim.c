/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:22:34 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:29:34 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char c, const char *set)
{
	int		i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

static int	search(const char *s1, const char *set, int order, int start)
{
	int	i;

	i = start;
	while (s1[i] != '\0')
	{
		if (!is_in_set(s1[i], set))
			return (i + (order < 0));
		i += order;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*final_string;
	int		start;
	int		end;

	start = search(s1, set, 1, 0);
	end = search(s1, set, -1, ft_strlen(s1) - 1);
	final_string = ft_substr(s1, start, (size_t)(end - start));
	return (final_string);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("abbbHello my name is Abab.abbabbaab", "ab"));
} */
