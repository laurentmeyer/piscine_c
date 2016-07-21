/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:24:30 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/21 22:14:28 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*new_node;

	new_node = (t_btree *)malloc(sizeof(t_btree));
	if (new_node)
	{
		new_node->left = 0;
		new_node->right = 0;
		new_node->item = item;
	}
	return (new_node);
}
