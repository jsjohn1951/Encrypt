/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexencrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:14:15 by wismith           #+#    #+#             */
/*   Updated: 2022/01/24 18:08:36 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../encrypt.h"

int	ft_hex_len(unsigned int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

char	*ft_hex(char *res, unsigned int num)
{
	int	rem;
	int	i;

	rem = 0;
	i = 0;
	while (num > 0)
	{
		rem = num % 23;
		if (rem < 10)
			res[i] = rem + 48;
		if (rem > 9)
			res[i] = rem + 55;
		i++;
		num /= 23;
	}
	res[i] = '\0';
	return (res);
}

void	ft_strrev(char *src)
{
	char	*s;
	char	*d;
	char	temp;

	s = (char *) src;
	d = src + ft_strlen(src) - 1;
	while (s < d)
	{
		temp = *s;
		*s = *d;
		*d = temp;
		s++;
		d--;
	}
}

char	*ft_puthex(unsigned int num)
{
	char	*res;
	int		len;

	if (num == 0)
		return (0);
	len = ft_hex_len(num);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res = ft_hex(res, num);
	ft_strrev(res);
	return (res);
}
