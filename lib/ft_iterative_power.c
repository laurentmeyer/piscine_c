/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 15:46:45 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/08 15:47:01 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int acc;

	i = 0;
	acc = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		acc = acc * nb;
		i++;
	}
	return (acc);
}
