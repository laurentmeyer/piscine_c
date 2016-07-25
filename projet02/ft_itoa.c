/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:42:45 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 20:58:27 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"

int		ft_intlen(int n)
{
	if (n == -2147483648)
		return (10);
	if (n < 0)
		return (ft_intlen(-n));
	if (n == 0)
		return (0);
	return (1 + ft_intlen(n / 10));
}

int		ft_power_ten(int n)
{
	if (n == 0)
		return (1);
	return (10 * ft_power_ten(n - 1));
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	res = (char *)malloc(ft_intlen(n) + 1);
	if (res)
	{
		i = ft_intlen(n) - 1;
		while (i >= 0)
		{
			res[i] = n % 10;
			n = n / 10;
			i--;
		}
		res[n] = '\0';
	}
	return (res);
}
