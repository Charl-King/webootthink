# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cking <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 13:39:31 by cking             #+#    #+#              #
#    Updated: 2018/03/28 16:11:33 by cking            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

MAIN = srcs/ft_display_file.c

PATH_SRC = srcs/

SRC = $(MAIN) $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c $(PATH_SRC)ft_swap.c

OBJ = ft_display_file.o ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o

all:
		gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all
