/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:13:09 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/20 22:05:07 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*current;

	if (begin_list == 0)
		return (0);
	current = begin_list;
	i = 0;
	while (i < nbr)
	{
		if (current->next == 0)
			return (0);
		i++;
		current = current->next;
	}
	return (current);
}
