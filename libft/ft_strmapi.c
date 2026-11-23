/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:14:37 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:55:57 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*final_string;
	unsigned int	i;

	final_string = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!final_string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		final_string[i] = f(i, s[i]);
		i++;
	}
	final_string[i] = '\0';
	return (final_string);
}
