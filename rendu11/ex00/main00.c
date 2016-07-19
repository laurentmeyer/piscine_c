/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 09:53:27 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/19 13:05:05 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

t_list		*ft_create_elem(void *data);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str == 0)
		return ;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
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

void		ft_print_list(t_list *list)
{
	while (list->next != NULL)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	ft_putstr(list->data);
}


int			main(void)
{
	t_list	*list;
	char	*str;
	int		i;

	str = "coucou\n";
	list = ft_create_elem(str);
	ft_putstr((char *)list->data);
	i = 42;
	list = ft_create_elem(&i);
	ft_putnbr(*((int *)list->data));
	return (0);
}
