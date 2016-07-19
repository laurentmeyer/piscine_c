/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 19:36:37 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/19 23:00:09 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft_do_op.h"

int							main(int argc, char **argv)
{
	int		a;
	int		b;
	t_ftptr	f;


	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	f = *(ft_do_op(argv[2]));	
	f(a, b);
	return (0);
}
