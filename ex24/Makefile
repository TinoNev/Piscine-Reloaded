# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchaillo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/24 09:55:40 by lchaillo          #+#    #+#              #
#    Updated: 2017/11/08 13:26:31 by lchaillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	./srcs/ft_putchar.c\
		./srcs/ft_strlen.c\
		./srcs/ft_putstr.c\
		./srcs/ft_strcmp.c\
		./srcs/ft_swap.c\

INCLUDE =	./includes/

CC = gcc
FLAG = -Wall -Wextra -Werror

NAME = libft.a

all :
	$(CC) $(FLAG) -c $(SRC) -I $(INCLUDE)
	ar rc $(NAME) ft_putchar.o ft_strlen.o ft_putstr.o ft_strcmp.o ft_swap.o
	ranlib $(NAME)

clean :
	/bin/rm -f ft_putchar.o ft_strlen.o ft_putstr.o ft_strcmp.o ft_swap.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
