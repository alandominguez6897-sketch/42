/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:50:30 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/13 14:53:34 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		sign = 1 - (2 * (nptr[i++] == '-'));
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = (10 * result) + (nptr[i++] - '0');
	return (result * sign);
}

/* #include <stdio.h>

int	main(void)
{
	
} */
