/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 00:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/17 00:31:06 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_valid_params(int ac, char **av)
{
	int i;
	int j;

	if (ac != 10)
		return (0);
	i = 1;
	while (i < 10)
	{
		if (ft_strlen(av[i]) != 9)
			return (0);
		j = 0;
		while (av[i][j] != '\0')
		{
			if (av[i][j] != '.' && (av[i][j] < '1' || av[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (ft_valid_params(argc, argv) == 0)
		ft_putstr("Erreur\n");
	else
		ft_putstr("Valid string\n");
	return (0);
}
