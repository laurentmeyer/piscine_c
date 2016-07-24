# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 00:24:19 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/24 00:53:34 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SHELL = /bin/sh

SOURCE =  srcs

HEADERS = includes

vpath %.h $(HEADERS)

vpath %.c $(SOURCE)

NAME = libft.a

SOURCES = 

all : $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -o $(NAME) -I /$(HEADERS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
