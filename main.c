/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:12:23 by wismith           #+#    #+#             */
/*   Updated: 2022/01/24 17:19:44 by wismith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "encrypt.h"

int	main(void)
{
	int		fd;
	int		fd2;
	char	*s;
	int		i;

	i = 5;
	fd = open("txt/Decrypted.txt", O_RDONLY);
	fd2 = open("txt/encrypted.txt", O_WRONLY);
	banner();
	printf("\x1B[33m\n\tEncrypting file\n\n");
	while (i-- > 0)
	{
		if (i % 2 == 0)
			printf("\x1B[36m.\t.\t   .\t   .\n");
		else
			printf("\t\x1B[35m--Building--\n");
		sleep(1);
	}
	printf("\x1B[32m\nFinished Encryption\nCheck Decrypted.txt\n\n");
	s = get_next_line(fd);
	write_encrypt(s, encrypt(s), fd2);
	while (s)
	{
		s = get_next_line(fd);
		if (s == NULL)
			break ;
		write_encrypt(s, encrypt(s), fd2);
		free (s);
	}
	return (0);
}
