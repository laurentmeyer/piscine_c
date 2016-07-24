/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 22:11:25 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/10 22:11:30 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_pyr_height(int size)
{
	int lines;
	int i;

	i = 1;
	lines = 0;
	while (i <= size)
	{
		lines = lines + i + 2;
		i++;
	}
	return (lines);
}

int		ft_line_width(int line)
{
	int l;
	int f;
	int acc;
	int ltotal;

	l = 1;
	f = 1;
	ltotal = 1;
	acc = 1;
	while (ltotal <= line)
	{
		if (l > f + 2)
		{
			acc = acc + 4 + ((f - 1) / 2) * 2;
			f++;
			l = 1;
		}
		acc = acc + 2;
		ltotal++;
		l++;
	}
	return (acc);
}

void	ft_put_chars(char c, int times)
{
	int i;

	i = 0;
	while (i < times)
	{
		ft_putchar(c);
		i++;
	}
}

void	ft_put_door(int size, int line)
{
	int side;
	int knob;

	side = ((size - 1) / 2) * 2 + 1;
	knob = side / 2 + 1;
	if (size > 4 && ft_pyr_height(size) - line == knob - 1)
	{
		ft_put_chars('|', side - 2);
		ft_putchar('$');
		ft_putchar('|');
	}
	else if (ft_pyr_height(size) - line < side)
		ft_put_chars('|', side);
}

void	sastantua(int size)
{
	int		maxw;
	int		l;
	int		center;
	int		doorsize;

	l = 1;
	maxw = (ft_line_width(ft_pyr_height(size)));
	center = (maxw / 2) + 1;
	doorsize = ((size - 1) / 2) * 2 + 1;
	while (l <= ft_pyr_height(size))
	{
		ft_put_chars(' ', (maxw - ft_line_width(l)) / 2);
		ft_putchar('/');
		if (ft_pyr_height(size) - l < doorsize)
		{
			ft_put_chars('*', (ft_line_width(l) - doorsize) / 2 - 1);
			ft_put_door(size, l);
			ft_put_chars('*', (ft_line_width(l) - doorsize) / 2 - 1);
		}
		else
			ft_put_chars('*', ft_line_width(l) - 2);
		ft_putchar('\\');
		ft_putchar('\n');
		l++;
	}
}
