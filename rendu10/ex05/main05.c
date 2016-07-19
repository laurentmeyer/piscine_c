/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 18:07:25 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/18 18:50:18 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int		ft_isempty(char *str)
{
	if (str[0] == '\0')
		return (1);
	return (0);
}

int		ft_intcmp(int a, int b)
{
	if (a == b)
		return (0);
	if (a < b)
		return (-1);
	else
		return (1);
}

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int	main(void)
{
	int tab[4];

	tab[0] = -1;
	tab[1] = 1;
	tab[2] = -1;
	tab[3] = 2;
	ft_putnbr(ft_is_sort(tab, 4, &ft_intcmp));
	return (0);
}
