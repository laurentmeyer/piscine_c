/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 22:34:20 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 00:17:05 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(int ac, char **av)
{
	int		i;
	char	*str;

	if (ac != 2)
	{
		ft_putstr("Un seul argunment svp\n");
		return (0);
	}
	i = 0;
	str = av[1];
	/*
	if (ft_col_number(str) == ft_strlen("9 1 4 3 7 5 2 6 8"))
			ft_putstr("coucou");
	*/

	while (i < 5)
	{
		ft_putstr(str);
		ft_putnbr(ft_count_c(str));
		ft_putstr(ft_colle_x(ft_count_c(str), ft_count_l(str), i));
		ft_putchar('\n');
		ft_putchar('\n');
		ft_putnbr(ft_strcmp(ft_colle_x(ft_count_c(str), ft_count_l(str), i), str));
		ft_putchar('\n');
		ft_putchar('\n');
		i++;
	}
	return (0);
}
