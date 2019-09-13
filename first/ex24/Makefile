# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 19:39:20 by lnoisome          #+#    #+#              #
#    Updated: 2019/09/07 21:59:37 by lnoisome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC_FLAG = gcc -Wall -Wextra -Werror
PATH = ./srcs/
SRC = $(PATH)ft_putchar.c $(PATH)ft_putstr.c \
	  $(PATH)ft_strcmp.c $(PATH)ft_strlen.c $(PATH)ft_swap.c
OBF = ft_putchar.o ft_putstr.o ft_strcmp.o\
	  ft_strlen.o ft_swap.o
HEADER = ./includes/

all: $(NAME)

$(NAME):
	$(CC_FLAG) $(SRC) -c -I $(HEADER)
	ar rc $(NAME) $(OBF)

.PHONY: clean
clean:
	rm -f $(OBF)

.PHONY: fclean
fclean:
	rm -f $(OBF) $(NAME)

.PHONY: re
re: fclean all
