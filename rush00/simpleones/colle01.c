/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdebbagh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 17:31:18 by kdebbagh          #+#    #+#             */
/*   Updated: 2016/07/10 22:46:23 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_fill_matrix(char *matrix, int y, int x)
{
	int i;
	int j;
	int c;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			c = i * x + j;
			*(matrix + c) = ' ';
			if (c / x == 0 || c / x == y - 1 || c % x == 0 || c % x == x - 1)
				*(matrix + c) = '*';
			if (c == x - 1 || c == x * (y - 1))
				*(matrix + c) = '\\';
			if (c == 0 || c == (y * x) - 1)
				*(matrix + c) = '/';
			j++;
		}
		i++;
		j = 0;
	}
}

void	ft_print_matrix(char *matrix, int y, int x)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			ft_putchar(*(matrix + (i * x) + j));
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	colle(int x, int y)
{
	char matrix[y * x];

	if (y < 1 || x < 1)
		return ;
	ft_fill_matrix(matrix, y, x);
	ft_print_matrix(matrix, y, x);
	return ;
}
