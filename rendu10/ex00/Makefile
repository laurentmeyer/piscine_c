# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 11:24:58 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/20 10:52:59 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh

SOURCE =  srcs

HEADERS = includes

vpath %.h $(HEADERS)

vpath %.c $(SOURCE)

NAME = libft.a

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

.PHONY : all

all : $(NAME)

$(NAME) : $(OBJECTS) 
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS) : ft.h

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
