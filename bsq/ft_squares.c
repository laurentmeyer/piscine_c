/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squares.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 22:13:51 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 22:19:35 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int			ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/*
t_point		*ft_dup_point(t_point *pt)
{
	t_point *res;

	res = ft_new_pt(pt->
*/

t_rect		*ft_biggest_square(t_list *rec_list)
{
	int		side;
	t_rect	*tmp;
	t_point	*pt;

	side = 0;
	pt = ft_new_pt(0, 0);
	while (rec_list)
	{
		tmp = (t_rect *)(rec_list->data);
		if (ft_min(tmp->height, tmp->width) > side)
		{
			side = ft_min(tmp->height, tmp->width);
			pt = ft_new_pt(tmp->origin->x, tmp->origin->y);
		}
		else if (ft_min(tmp->height, tmp->width) == side
				&& tmp->origin->y < pt->y)
			pt = ft_new_pt(tmp->origin->x, tmp->origin->y);
		else if (ft_min(tmp->height, tmp->width) == side
				&& tmp->origin->y == pt->y && tmp->origin->x < pt->x)
			pt->x = tmp->origin->x;
		rec_list = rec_list->next;
	}
	return (ft_new_rect(pt, side, side));
}
