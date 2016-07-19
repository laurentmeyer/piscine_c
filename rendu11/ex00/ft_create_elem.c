/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 09:56:22 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/19 12:10:07 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list 	*ft_create_elem(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	list->data = data;
	list->next = NULL;
	return(list);
}
