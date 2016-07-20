/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 16:25:29 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/20 19:43:48 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int acc;

	acc = 0;
	if (begin_list)
	{
		acc = 1;
		while (begin_list->next != 0)
		{
			begin_list = begin_list->next;
			acc++;
		}
	}
	return (acc);
}
