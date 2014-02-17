#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/17 12:00:37 by rbusseti          #+#    #+#              #
#    Updated: 2014/02/17 12:06:07 by rbusseti         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = lem_in

SRC = main.c get_infos.c

OBJ = main.o get_infos.o

FLAG = -Wall -Wextra -Werror

GCC = gcc -o $(NAME) $(FLAG)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	$(GCC) $(SRC) -I libft/includes -L libft/ -lft

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
