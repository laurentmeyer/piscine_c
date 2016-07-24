/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 08:48:28 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 08:53:48 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"

int		ft_multiply(int a, int b)
{
	return (a * b);
}

int		ft_divide(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

int		ft_modulo(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_subtract(int a, int b)
{
	return (a - b);
}
