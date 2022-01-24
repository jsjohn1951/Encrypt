/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encrypt.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:09:43 by wismith           #+#    #+#             */
/*   Updated: 2022/01/24 16:14:05 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef ENCRYPT_H
# define ENCRYPT_H
# include "assets/get_next_line.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

char	*encrypt(char *s);
int		ft_atoi(const char *nptr);
char	*ft_puthex(unsigned int num);
void	write_encrypt(char *s1, char *s2, int fd);
void	banner(void);

#endif