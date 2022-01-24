/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encrypt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:13:23 by wismith           #+#    #+#             */
/*   Updated: 2022/01/23 14:35:42 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "encrypt.h"

int	encrypt_len(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] != '\t')
		i++;
	i++;
	while (s[++i] >= '0' && s[i] <= '9' && s[i])
		len++;
	len++;
	return (len);
}

char	*isolate(char *s, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	i -= 4;
	res[len + 1] = '\0';
	while (len >= 0)
	{
		res[len] = s[i];
		len--;
		i--;
	}
	return (res);
}

char	*res_gen(char *s1, char *s2, int len)
{
	char	*res;
	int		i;
	int		index;

	i = -1;
	index = 0;
	res = (char *)malloc(sizeof(char) * (len + 3 + 2));
	if (!res)
		return (NULL);
	while (s1[++i])
		res[i] = s1[i];
	while (s2[index] && s2[index] != '\n')
		index++;
	index -= 3;
	while (s2[index])
	{
		res[i] = s2[index];
		index++;
		i++;
	}
	res[len + 3 + 1] = '\n';
	res[len + 3 + 2] = '\0';
	return (res);
}

char	*encrypt(char *s)
{
	int		len;
	int		iso_num;
	char	*iso;
	char	*res;

	len = encrypt_len(s);
	iso = isolate(s, len);
	iso_num = ft_atoi(iso);
	res = res_gen(ft_puthex(iso_num), s, len);
	return (res);
}