/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 22:34:20 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/23 22:35:10 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(void)
{
	int i;

	i = 0;
	while (i < 5)
	{
		ft_putstr(ft_colle_x(4, 5, i));
		i++;
	}
	return (0);
}
