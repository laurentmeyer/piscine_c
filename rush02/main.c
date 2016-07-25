/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 22:34:20 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 18:53:07 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"


int		*ft_find_matches(char *str)
{
	int		i;
	int		*res;
	int		diff;

	i = 0;
	res = (int *)malloc(5 *sizeof(int));
	if (res)
	{
		while (i < 5)
		{
			res[i] = 0;
			diff = ft_strcmp(ft_colle_x(ft_count_c(str),
						ft_count_l(str), i), str);
			if (diff == 0)
				res[i] = 1;
			i++;
		}
	}
	return (res);
}

int		ft_number_results(int *arr)
{
	int		results;
	int		i;

	i = 0;
	results = 0;
	while (i < 5)
	{
		if (arr[i] == 1)
			results++;
		i++;
	}
	return (results);
}

void	ft_print_result(int colle, int lines, int cols)
{
	ft_putstr("[colle-0");
	ft_putnbr(colle);
	ft_putstr("] [");
	ft_putnbr(lines);
	ft_putstr("] [");
	ft_putnbr(cols);
	ft_putstr("]");
}




void	ft_print_results(char *str)
{
	int		results;
	int		i;
	int		*arr;

	arr = ft_find_matches(str);
	results = ft_number_results(arr);
	if (results == 0)
		ft_putstr("aucune\n");
	else 
	{
	i = 0;
	while (arr[i] == 0)
		i++;
	ft_print_result(i, ft_count_c(str), ft_count_l(str));
	i++;
	while (i < 5)
	{
		if (arr[i] != 0)
		{
			ft_putstr(" || ");
			ft_print_result(i, ft_count_c(str), ft_count_l(str));
		}
		i++;
	}
	ft_putchar('\n');
	}
}


int		main(void)
{
	char	*str;

	str = ft_import_stdin();
	if (ft_valid_input(str) == 0)
		ft_putstr("aucune\n");
	else
		ft_print_results(str);
	return (0);
}
