/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 22:03:34 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/19 22:40:12 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void						ft_print_addition(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void						ft_print_subtraction(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void						ft_print_multiplication(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void						ft_print_division(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(a / b);
		ft_putchar('\n');
	}
}

void						ft_print_modulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(a % b);
		ft_putchar('\n');
	}
}

void						ft_print_zero(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr("0\n");
}

t_ftptr						ft_do_op(char *str)
{
	char	symbols[6];
	t_ftptr	functions[6];
	int i;
	
	if (str[1] != '\0')
		return (0);
	symbols[0] = '+';
	functions[0] = &ft_print_addition;
	symbols[1] = '-';
	functions[1] = &ft_print_subtraction;
	symbols[2] = '*';
	functions[2] = &ft_print_multiplication;
	symbols[3] = '/';
	functions[3] = &ft_print_division;
	symbols[4] = '%';
	functions[4] = &ft_print_modulo;
	symbols[5] = 0;
	functions[5] = &ft_print_zero;
	i = 0;
	while (str[0] != symbols[i] && symbols[i] != 0)
		i++;
	return (functions[i]);
}
