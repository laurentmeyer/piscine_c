/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 00:28:07 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 13:05:16 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"


void	ft_print_strarr(char **arr)
{
	int i;

	i = 0;
	while (arr[i] != 0)
	{
		ft_putstr(arr[i]);
		ft_putchar('\n');
		i++;
	}
}

int main(int ac, char **av)
{
	char	*str;

	(void)ac;
	(void)av;
	str = "-3 * 31 + 12 / - 3";
	ft_print_strarr(ft_split_symbols(str));

	/*
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar(’\n’);
	}
	*/
	return (0);
}
