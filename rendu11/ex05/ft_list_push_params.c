/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 17:40:57 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/19 18:17:24 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (new_elem)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	
	if (ac == 1)
		return (0);
	list = ft_create_elem(&av[1]);
	i = 2;
	while (i < ac)
	{
		ft_list_push_front(&list, &av[i]);
		i++;
	}
	return (list);
}
