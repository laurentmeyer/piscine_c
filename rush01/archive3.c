/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/17 18:36:12 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_sudoku.h"

int		ft_valid_params(int ac, char **av)
{
	int i;
	int j;
	int count;

	if (ac != 10)
		return (0);
	i = 1;
	count = 0;
	while (i < 10)
	{
		if (ft_strlen(av[i]) != 9)
			return (0);
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] >= '1' && av[i][j] <= '9')
				count++;
			if (av[i][j] != '.' && (av[i][j] < '1' || av[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	if (count < 17)
		return (0);
	return (1);
}

char		*ft_args_to_tab(char **av)
{
	int		i;
	int		j;
	char	*dest;

	i = 1;
	dest = (char *)malloc(82 * sizeof(char));
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			dest[9 * i + j] = av[i][j];
			j++;
		}
		i++;
	}
	dest[81] = '\0';
	ft_putstr(dest);
	return (dest);
}

int		ft_check_tab(char *tab)
{
	int i;
	int line;
	int col;
	int block;

	i = 0;
	while (i < 81)
	{
		if (dest[i] != '.')
		{
			line = i / 9;
			col = i % 9;
			block = (line / 3) * 3 + (col / 3);
	
			j = 0;
			while (j < 81)
			{
				if (dest[i] == dest[j] && i != j && (j / 9) == line)
					return (0);
				if (dest[i] == dest[j] && i != j && (j % 9) == col)
					return (0);
				if (dest[i] == dest[j] && i != j
						&& ((j / 9) / 3) * 3 + ((j % 9) / 3))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}	



/*
void	ft_print_sudoku(int* line)
{
	int i;

	if (line == 0)
		return ;
	i = 0;
	while (i < 81)
	{
		ft_putnbr(line[i]);
		i++;
	}
}

int		ft_check_dup_line(int *tab, int pos, int val)
{
	int line;
	int i;

	line = pos / 9;
	i = 0;
	while (i < 81)
	{
		if (i != pos && i / 9 == line && tab[i] == val)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_dup_col(int *tab, int pos, int val)
{
	int col;
	int i;

	col = pos % 9;
	i = 0;
	while (i < 81)
	{
		if (i != pos && i % 9 == col && tab[i] == val)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_dup_block(int *tab, int pos, int val)
{
	int i;
	int block;
	int line;
	int col;

	line = pos / 9;
	col = pos % 9;
	block = (line / 3) * 3 + (col / 3);
	i = 0;
	while (i < 81)
	{
		if (i != pos && ((i / 9) / 3) * 3 + (i % 9) / 3 == block && tab[i] == val)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_lines(int *tab)
{
	int i;

	i = 0;
	while (i < 81)
	return (


int		*ft_rec_inc(int	*tab)
{
	int i;
	int	j;
	int *copy;

	ft_print_sudoku(tab);
	ft_putchar('\n');
	i = 0;
	while (i < 81)
	{
		if (tab[i] != 0)
			i++;
		copy = ft_tabdup(tab, 81);
		j = 1;
		while (j <= 9)
		{
			if (ft_check_dup_block(tab, i, j)
					|| ft_check_dup_col(tab, i, j)
					|| ft_check_dup_line(tab, i, j))
				return (
			copy[i] = j;
			if (ft_rec_inc(copy) == 0)
				j++;
			else
				return (ft_rec_inc(copy));
		}
	}
		return (tab);
}
*/

int		main(int argc, char **argv)
{

	if (ft_valid_params(argc, argv) == 0)
		ft_putstr("Erreur\n");
	//else if (ft_dup_m(ft_ltom(ft_argstol(argv))) == 1)
	//	ft_putstr("Erreur\n");
	else
		ft_args_to_tab(argv);		
		//ft_print_sudoku(ft_rec_inc(ft_argstol(argv)));
	return (0);
}
