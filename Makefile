# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wismith <wismith@42ABUDHABI.AE>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 13:58:23 by wismith           #+#    #+#              #
#    Updated: 2022/01/24 22:39:59 by wismith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

output: main.o get_next_line.o get_next_line_utils.o atoi.o encrypt.o hexencrypt.o write_encrypt.o banner.o
	@gcc main.o get_next_line.o get_next_line_utils.o atoi.o encrypt.o hexencrypt.o write_encrypt.o banner.o -o encrypt

FLAGS = -g -Wall -Werror -Wextra

main.o: main.c
	@gcc $(FLAGS) -c main.c
	@echo "\033[92mCompiled main.c\033[0m"

get_next_line.o: assets/get_next_line.c
	@gcc $(FLAGS) -c assets/get_next_line.c
	@echo "\033[92mCompiled get_next_line.c\033[0m"

get_next_line_utils.o: assets/get_next_line_utils.c
	@gcc $(FLAGS) -c assets/get_next_line_utils.c
	@echo "\033[92mCompiled get_next_line_utils.c\033[0m"
	
atoi.o: lib_assets/atoi.c
	@gcc $(FLAGS) -c lib_assets/atoi.c

encrypt.o: encrypt.c
	@gcc $(FLAGS) -c encrypt.c
	@echo "\033[92mCompiled encrypt.c\033[0m"

hexencrypt.o: lib_assets/hexencrypt.c
	@gcc $(FLAGS) -c lib_assets/hexencrypt.c

write_encrypt.o: lib_assets/write_encrypt.c
	@gcc $(FLAGS) -c lib_assets/write_encrypt.c
	@echo "\033[92mWriting Encryption File\033[0m"

banner.o: lib_assets/banner.c
	@gcc $(FLAGS) -c lib_assets/banner.c

clean:
	@rm -f *.o
	@echo "\e[1;1H\e[2J"
	@echo "\033[0;31mCleaned object files.\033[0m"

xclean: clean
	@rm -f encrypt
	@echo "\033[0;31mCleaned executable file.\033[0m"
