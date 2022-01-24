/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:49:32 by wismith           #+#    #+#             */
/*   Updated: 2022/01/22 20:49:47 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	size_t	res;
	int		i;
	int		ncounter;

	res = 0;
	i = 0;
	ncounter = 0;
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			ncounter++;
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		res *= 10;
		res += nptr[i++] - '0';
	}
	if (res >= 9223372036854775807 && ncounter == 0)
		return (-1);
	if (res >= 9223372036854775807 && ncounter > 0)
		return (0);
	if (ncounter > 0)
		res *= -1;
	return (res);
}
