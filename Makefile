# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oorlov <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 20:39:03 by oorlov            #+#    #+#              #
#    Updated: 2018/12/02 20:39:04 by oorlov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIBFT_SRCS = libft/srcs/ft_atoi.c \
			 libft/srcs/ft_bzero.c \
			 libft/srcs/ft_isalnum.c \
			 libft/srcs/ft_isalpha.c \
			 libft/srcs/ft_isascii.c \
			 libft/srcs/ft_isdigit.c \
			 libft/srcs/ft_isprint.c \
			 libft/srcs/ft_itoa.c \
			 libft/srcs/ft_lstadd.c \
			 libft/srcs/ft_lstdel.c \
			 libft/srcs/ft_lstdelone.c \
			 libft/srcs/ft_lstiter.c \
			 libft/srcs/ft_lstmap.c \
			 libft/srcs/ft_lstnew.c \
			 libft/srcs/ft_memalloc.c \
			 libft/srcs/ft_memccpy.c \
			 libft/srcs/ft_memchr.c \
			 libft/srcs/ft_memcmp.c \
			 libft/srcs/ft_memcpy.c \
			 libft/srcs/ft_memdel.c \
			 libft/srcs/ft_memmove.c \
			 libft/srcs/ft_memset.c \
			 libft/srcs/ft_putchar.c \
			 libft/srcs/ft_putchar_fd.c \
			 libft/srcs/ft_putendl.c \
			 libft/srcs/ft_putendl_fd.c \
			 libft/srcs/ft_putnbr.c \
			 libft/srcs/ft_putnbr_fd.c \
			 libft/srcs/ft_putstr.c \
			 libft/srcs/ft_putstr_fd.c \
			 libft/srcs/ft_strcat.c \
			 libft/srcs/ft_strchr.c \
			 libft/srcs/ft_strclr.c \
			 libft/srcs/ft_strcmp.c \
			 libft/srcs/ft_strcpy.c \
			 libft/srcs/ft_strdel.c \
			 libft/srcs/ft_strdup.c \
			 libft/srcs/ft_strequ.c \
			 libft/srcs/ft_striter.c \
			 libft/srcs/ft_striteri.c \
			 libft/srcs/ft_strjoin.c \
			 libft/srcs/ft_strlcat.c \
			 libft/srcs/ft_strlen.c \
			 libft/srcs/ft_strmap.c \
			 libft/srcs/ft_strmapi.c \
			 libft/srcs/ft_strncat.c \
			 libft/srcs/ft_strncmp.c \
			 libft/srcs/ft_strncpy.c \
			 libft/srcs/ft_strnequ.c \
			 libft/srcs/ft_strnew.c \
			 libft/srcs/ft_strnstr.c \
			 libft/srcs/ft_strrchr.c \
			 libft/srcs/ft_strsplit.c \
			 libft/srcs/ft_strstr.c \
			 libft/srcs/ft_strsub.c \
			 libft/srcs/ft_strtrim.c \
			 libft/srcs/ft_tolower.c \
			 libft/srcs/ft_toupper.c

LIBFT_OBJS = *.o

FILLIT_SRCS = *.c

all: $(NAME)

$(NAME):
	gcc -c -Werror -Wextra -Wall $(LIBFT_SRCS)
	ar rc libft.a $(LIBFT_OBJS)
	ranlib libft.a
	gcc -o $(NAME) -I./libft/srcs -Werror -Wextra -Wall $(FILLIT_SRCS) libft.a

clean:
	rm -rf $(LIBFT_OBJS)

fclean: clean
	/bin/rm -rf libft.a
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re			  