/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 23:25:21 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/21 23:47:47 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (applyf && root)
	{
		if (root->left)
			btree_apply_infix(root->left, applyf);
		applyf(root);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}
