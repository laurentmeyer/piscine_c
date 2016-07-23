/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 23:52:07 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/22 23:09:30 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree *current;
	t_btree *next_root;

	if (root == 0)
		return ;
	current =  *root;
	if (current == 0)
		next_root = btree_create_node(item);
		root = &next_root;
	else if ((*cmpf)(item, current->item) < 0)
	{
		if (current->left == 0)
			current->left = btree_create_node(item);
		else
		{
			next_root = &(current->left);
			btree_insert_data(next_root, item, cmpf);
		}
	}
	else
	{
		if (current->right == 0)
			current->right = btree_create_node(item);
		else
			btree_insert_data(&(current->right), item, cmpf);
	}
}
