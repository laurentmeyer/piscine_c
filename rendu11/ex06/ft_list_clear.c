/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 23:54:36 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/20 20:52:14 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next_elem;
	t_list	*current_elem;

	if (begin_list == 0 || *begin_list == 0)
		return ;
	current_elem = *begin_list;
	while (current_elem->next != 0)
	{
		next_elem = current_elem->next;
		free(current_elem);
		current_elem = next_elem;
	}
	free(current_elem);
	*begin_list = 0;
}
