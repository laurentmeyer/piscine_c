/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:46:55 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 19:27:40 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

int     ft_list_size(t_list **begin_list)
{
	t_list  *tmp;
	int     i;

	tmp = *begin_list;
	i = 0;
	while(tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*end_list;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		new_elem = ft_create_elem(data);
		if (new_elem)
		{
			end_list = *begin_list;
			while (end_list->next != NULL)
				end_list = end_list->next;
			end_list->next = new_elem;
		}
	}
}

void	ft_push_back_ifne(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*end_list;

	if (!data)
		return ;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		new_elem = ft_create_elem(data);
		if (new_elem)
		{
			end_list = *begin_list;
			while (end_list->next != NULL)
				end_list = end_list->next;
			end_list->next = new_elem;
		}
	}
}
