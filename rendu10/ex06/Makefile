# *************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 19:37:03 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/20 13:20:19 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SHELL		= /bin/sh

NAME		= do-op

OBJECTS 	= main.o ft_do_op.o ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o

SOURCES		= ./srcs

HEADERS		= ./includes

vpath %.c $(SOURCES)

vpath %.h $(HEADERS)

CFLAGS	= -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJECTS)
	gcc -o $(NAME) $(OBJECTS)

%.o : %.c
	gcc -c $(CFLAGS)

clean :
	rm -f $(OBJECTS)
