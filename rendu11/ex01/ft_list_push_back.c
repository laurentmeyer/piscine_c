/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:23:31 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/19 13:05:08 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*end_list;

	new_elem = ft_create_elem(data);
	if (new_elem)
	{
		end_list = *begin_list;
		while (end_list->next != NULL)
			end_list = end_list->next;	
		end_list->next = new_elem;
	}
}
