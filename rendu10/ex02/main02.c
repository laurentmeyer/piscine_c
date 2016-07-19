/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 15:43:59 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/18 16:28:37 by lmeyer           ###   ########.fr       */
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

int		ft_double(int i)
{
	return (i * 2);
}

int		*ft_map(int *tab, int length, int (*f)(int));

int	main(void)
{
	int tab[3];
	int i;
	int *result;

	tab[0] = 12;
	tab[1] = 42;
	tab[2] = 1337;
	i = 0;
	result = ft_map(tab, 3, &ft_double);
	while (i < 3)
	{
		ft_putnbr(result[i]);
		ft_putchar('\n');
		i ++;
	}
	return (0);
}
