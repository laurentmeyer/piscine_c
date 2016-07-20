# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/20 10:24:42 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/20 19:30:04 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Wextra -Werror

DIR_SRC = ./srcs/

DIR_INC = includes

SOURCES = main00.c ft_display_file.c ft_put_error.c

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = ft_display_file.h

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) -o $(NAME) $(OBJECTS)

$(OBJECTS) :
	$(CC) -c $(SOURCES:%.c=$(DIR_SRC)%.c) -I $(DIR_INC)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)
