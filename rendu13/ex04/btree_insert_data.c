/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 23:52:07 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/22 01:03:39 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (root->left == 0 && (cmpf(item, root->left) < 0))
		root->left = btree_create_node(item);
	else if (root->right == 0 && (cmpf(item, root->right) >=0))
		root->right = btree_create_node(item);
	else if (cmpf(item, root->left) < 0)
		
}
