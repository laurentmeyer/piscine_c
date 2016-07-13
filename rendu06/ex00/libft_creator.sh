# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/12 20:01:25 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/13 17:49:59 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c ft_putnbr.c
ar rc libft.a ft_putchar.o ft_putstr.o\
	ft_strlen.o ft_strcmp.o ft_swap.o ft_putnbr.o
