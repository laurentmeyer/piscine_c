/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:46:55 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/25 20:43:55 by lmeyer           ###   ########.fr       */
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

void	ft_list_replace(t_list **to_replace, t_list *new)
{
	t_list *tmp;

	if(!to_replace || !*to_replace || !new)
		return ;
	tmp = (*to_replace)->next;
	free(*to_replace);
	*to_replace = new;
	while (new->next)
		new = new->next;
	new->next = tmp;
}