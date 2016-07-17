/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/17 02:50:39 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_sudoku.h"

int		ft_valid_params(int ac, char **av)
{
	int i;
	int j;

	if (ac != 10)
		return (0);
	i = 1;
	while (i < 10)
	{
		if (ft_strlen(av[i]) != 9)
			return (0);
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] != '.' && (av[i][j] < '1' || av[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		*ft_params_to_line(char **av)
{
	int		i;
	int		j;
	int		*dest;

	i = 1;
	dest = (int *)malloc(81 * sizeof(int));
	while (i <= 9)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] == '.')
				*(dest + 9 * (i - 1) + j) = 0;
			else
				*(dest + 9 * (i - 1) + j) = av[i][j] - '0';
			j++;
		}
		i++;
	}
	return (dest);
}

int		**ft_line_to_matrix(int	*line)
{
	int		i;
	int		j;
	int		**dest;

	dest = (int **)malloc(27 * sizeof(int *));
	i = 0;
	while (i < 81)
	{
		j = 0;
		while (j < 9)
		{
			if (i / 9 == j)
				dest[j][i % 9] = line[i];
			if (i % 9 == j)
				dest[j + 9][i % 9] = line[i];
			if (((i / 9) / 3) * 3 + (i % 9) / 3 == j)
				dest[j + 18][i % 9] = line[i];
			j++;
		}
		i++;
	}
	return (dest);
}



int		main(int argc, char **argv)
{
	int i;

	if (ft_valid_params(argc, argv) == 0)
		ft_putstr("Erreur\n");
	else
	{
		i = 0;
		while (i < 81)
		{
			ft_putnbr(ft_params_to_line(argv)[i]);
			i++;
		}
	}
	return (0);
}
