/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_encrypt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:54:24 by wismith           #+#    #+#             */
/*   Updated: 2022/01/24 15:02:21 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../encrypt.h"

void	write_encrypt(char *s1, char *s2, int fd)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (s1 && s1[i] && s1[i] != '\t')
	{
		write(fd, &s1[i], 1);
		i++;
	}
	write(fd, &s1[i], 1);
	while (s2 && s2[index])
	{
		write(fd, &s2[index], 1);
		index++;
		i++;
	}
}
