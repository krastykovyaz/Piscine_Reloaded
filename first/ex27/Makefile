# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 14:41:31 by lnoisome          #+#    #+#              #
#    Updated: 2019/09/09 23:28:04 by lnoisome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = gcc -Wall -Wextra -Werror
PATH = ./srcs/
SRCS = $(PATH)ft_putstr.c $(PATH)ft_putchar.c $(PATH)ft_display_file.c
OBF = ft_putstr.o ft_display_file.o ft_putchar.o
HEADER = $(PATH)ft.h
all: $(NAME)

$(NAME):
	$(FLAG) $(SRCS) -c -I$(HEADER)
	gcc $(OBF) -o $(NAME)
clean:
	rm -f $(OBF)

fclean:
	rm -f $(OBF) $(NAME)

re: fclean all

.PHONY: all clean fclean re
