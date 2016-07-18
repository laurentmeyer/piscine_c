/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/17 04:21:38 by lmeyer           ###   ########.fr       */
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

int		**ft_select_lines(int *line)
{
	int		i;
	int		j;
	int		**dest;

	dest = (int **)malloc(9 * sizeof(int *));
	i = 0;
	while (i < 81)
	{
		j = 0;
		while (j < 9)
		{
			dest[j] = (int *)malloc(9 * sizeof(int));
			if (i / 9 == j)
				dest[j][i % 9] = line[i];
			j++;
		}
		i++;
	}
	return (dest);
}

int		**ft_create_matrix(int lines, int cols)
{
	int i;
	int **dest;

	i = 0;
	dest = (int **)malloc(lines * sizeof(int *));
	while (i < lines)
	{
		dest[i] = (int *)malloc(cols * sizeof(int));
		i++;
	}
	return (dest);
}

int		**ft_line_to_matrix(int	*line)
{
	int		i;
	int		j;
	int		**dest;

	dest = ft_create_matrix(27, 9);
	i = 0;
	while (i < 81)
	{
		j = 0;
		while (j < 9)
		{
			if (i / 9 == j)
				dest[j][i % 9] = line[i];
			if (i % 9 == j)
				dest[j + 9][ = line[i];
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
	int j;

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
		ft_putchar('\n');
		i = 9;
		while (i < 18)
		{
			j = 0;
			while (j < 9)
			{
				ft_putnbr(ft_line_to_matrix(ft_params_to_line(argv))[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
