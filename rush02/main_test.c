/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 22:34:20 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 17:18:01 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"


char	*ft_find_matches(char *str)
{
	int		i;
	char	*res;
	int		diff;

	i = 0;
	res = (char *)malloc(5 *sizeof(char));
	if (res)
	{
		while (i < 5)
		{
			res[i] = 0;
			diff = ft_strcmp(ft_colle_x(ft_count_c(str), ft_count_l(str), i), str);
			if (diff == 0)
			{
				res[i] = '0' + i;
				/*
				ft_putstr("correspondance pour la colle : ");
				ft_putnbr(i);
				ft_putchar('\n');
				*/
			}
			i++;
		}
	}
	return (res);
}

int		ft_number_results(char *arr)
{
	int		results;
	int		i;

	i = 0;
	results = 0;
	while (i < 5)
	{
		if (arr[i] != 0)
			results++;
		i++;
	}
	return (results);
}

void	ft_print_result(char colle, int lines, int cols)
{
	ft_putstr("[colle-0");
	ft_putchar(colle);
	ft_putstr("] [");
	ft_putchar('0' + lines);
	ft_putstr("] [");
	ft_putchar('0' + cols);
	ft_putstr("]");
}




void	ft_print_results(char *str)
{
	int		results;
	int		i;
	char	*arr;

	arr = ft_find_matches(str);
	results = ft_number_results(arr);
	if (results == 0)
		ft_putstr("aucune\n");
	i = 0;
	while (arr[i] == 0)
		i++;
	ft_print_result(arr[i], ft_count_c(str), ft_count_l(str));
	i++;
	while (i < 5)
	{
		if (arr[i] != 0)
		{
			ft_putstr(" || ");
			ft_print_result(arr[i], ft_count_c(str), ft_count_l(str));
		}
		i++;
	}
	ft_putchar('\n');
}


int		main(void)
{
	//int		i;
	//char	*str;
	//int		diff;

	/*
	if (ac != 2)
	{
		ft_putstr("Un seul argunment svp\n");
		return (0);
	}
	if (ft_col_number(str) == ft_strlen("9 1 4 3 7 5 2 6 8"))
			ft_putstr("coucou");
	*/
//	ft_print_result('2', 3 , 4);
	ft_print_results(ft_import_stdin());
	return (0);
}
