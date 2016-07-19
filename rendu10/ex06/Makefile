# *************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 19:37:03 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/19 22:42:40 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SHELL = /bin/sh

NAME = do-op

OBJECTS = main.o ft_do_op.o ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o

all : $(OBJECTS) 
	gcc -o $(NAME) -Wall -Werror -Wextra $(OBJECTS)

$(OBJECTS) : ft.h

ft_main.o : ft_do_op.h

clean:
	rm -f $(OBJECTS)
