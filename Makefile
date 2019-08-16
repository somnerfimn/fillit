# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vandrish <vandrish@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/30 19:47:40 by vandrish          #+#    #+#              #
#    Updated: 2019/05/13 22:04:51 by vandrish         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fillit

LIB=./libft/libft.a

SRC = 	main.c \
		solver.c \
		store.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIB)
	$(CC) -g $(CFLAGS) -c $(addprefix ./src/, $(SRC)) -I . -I ./libft
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L ./libft -l ft

$(LIB):
	make re -C ./libft

clean:
	rm -rf $(OBJ)
	make clean -C ./libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re