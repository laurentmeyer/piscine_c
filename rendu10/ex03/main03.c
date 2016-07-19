/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 16:28:56 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/18 17:09:13 by lmeyer           ###   ########.fr       */
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

int		ft_any(char **tab, int(*f)(char*));

int	main(void)
{
	char *tab[4];

	tab[0] = "coucou";
	tab[1] = "42";
	tab[2] = "";
	tab[3] = 0;
	ft_putnbr(ft_any(tab, &ft_isempty));
	return (0);
}
