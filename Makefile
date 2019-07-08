# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrivera- <mrivera-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/21 11:07:24 by mrivera-          #+#    #+#              #
#    Updated: 2019/06/27 09:56:46 by mrivera-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C libft/ fclean && make -C libft/ 
	clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c -g
	clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c -g
	clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft 
	
clean:
	rm -rf *.o
	rm -rf test_gnl

fclean: clean
	@make -C libft/ fclean
 
re: fclean all