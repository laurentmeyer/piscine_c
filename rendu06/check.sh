# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    check.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/13 10:45:11 by lmeyer            #+#    #+#              #
#    Updated: 2016/07/13 13:48:11 by lmeyer           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cd ex00/
/bin/bash ./libft_creator.sh
touch coucou
sh ../clean.sh
cd ..
cc -Wall -Wextra -Werror -o test main.c ex00/libft.a
./test
