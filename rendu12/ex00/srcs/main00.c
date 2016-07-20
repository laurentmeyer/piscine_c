/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 10:24:57 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/20 19:12:25 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_put_error("File name missing.\n");
	else if (argc > 2)
		ft_put_error("Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}
