/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/17 22:14:36 by lmeyer           ###   ########.fr       */
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

	i = 0;
	dest = (char *)malloc(82 * sizeof(char));
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			*(dest + 9 * i + j) = av[i + 1][j];
			j++;
		}
		i++;
	}
	dest[81] = '\0';
	return (dest);
}

int		ft_check_tab(char *tab)
{
	int i;
	int line;
	int col;
	int block;
	int j;

	i = 0;
	while (i < 81)
	{
		if (tab[i] != '.')
		{
			line = i / 9;
			col = i % 9;
			block = (line / 3) * 3 + (col / 3);
	
			j = 0;
			while (j < 81)
			{
				if (tab[i] == tab[j] && i != j && (j / 9) == line)
					return (0);
				if (tab[i] == tab[j] && i != j && (j % 9) == col)
					return (0);
				if (tab[i] == tab[j] && i != j
						&& ((j / 9) / 3) * 3 + ((j % 9) / 3))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}	

int		ft_block(int pos)
{
	return (((pos / 9) / 3) * 3 + ((pos % 9) / 3));
}

char		*ft_check_insert(char* tab, char c, int pos)
{
	int		i;
	char	*dest;

	i = 0;
	while (i < 81)
	{
		if (tab[i] == c && i != pos)
		{
			if ((pos / 9) == (i / 9))
				return (0);
			if ((pos % 9) == (i % 9))
				return (0);
			if (ft_block(i) == ft_block(pos))
				return(0);
		}
		i++;
	}
	dest = ft_strdup(tab);
	dest[pos] = c;
	return (dest);
}

char		*ft_rec_asc(char *tab, char min_char)
{
	int		i;
	char	j;
	char	*copy;

	copy = ft_strdup(tab);
	ft_putstr(tab);
	ft_putstr("\n");
	
	i = 0;
	while (tab[i] != '\0')
	{
		while (tab[i] != '.')
			i++;
		min_char == '.' ? (j = '1') : (j = min_char + 1);
		ft_putchar('\n');
		ft_putchar(i);
		ft_putchar('\n');
		ft_putchar(j);
		ft_putchar('\n');
		while (j < '9')
		{
			if (ft_check_insert(tab, j, i) == 0)
				j++;
			return (ft_rec_asc(ft_check_insert(tab, j, i), '.'));
		}
		if (ft_check_insert(tab, '9', i) == 0)
		{
	ft_putstr("coucou\n");
			while (copy[i] != '.')
				i--;
			j = tab[i];
			tab[i] = '.';
			return (ft_rec_asc(tab, j + 1));
		}
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	char *tab;

	tab = 0;
	if (ft_valid_params(argc, argv) == 0)
		ft_putstr("Erreur\n");
	else
		tab = ft_args_to_tab(argv);
		ft_putstr(tab);		
		ft_putchar('\n');
		//ft_putstr("Arguments valides: ");
		//ft_putnbr(ft_check_tab(ft_args_to_tab(argv)));
		ft_putstr(ft_rec_asc(tab, '.')); 
	return (0);
}
