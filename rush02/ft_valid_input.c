/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:28:26 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/23 22:38:08 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_valid_input(char *str)
{
	return ((ft_number_lines(str) != 0) && (ft_col_number(str) != 0));
}
