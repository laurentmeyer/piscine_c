/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 09:21:18 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/26 11:54:56 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

t_rect		*ft_split_left(t_rect *rect, t_point *pt)
{
	t_point *origin;

	origin = rect->origin;
	if (rect->width < 2 || pt->x == origin->x)
		return (0);
	return (ft_new_rect(ft_new_pt(origin->x, origin->y),
		   pt->x - origin->x, rect->height));
}

t_rect		*ft_split_right(t_rect *rect, t_point *pt)
{
	t_point *origin;

	origin = rect->origin;
	if (rect->width < 2 || pt->x == origin->x + rect->width - 1)
		return (0);
	return (ft_new_rect(ft_new_pt(pt->x + 1, origin->y),
		   origin->x + rect->width - pt->x - 1, rect->height));
}

t_rect		*ft_split_down(t_rect *rect, t_point *pt)
{
	t_point *origin;

	origin = rect->origin;
	if (rect->height < 2 || pt->x == origin->y + rect->height - 1)
		return (0);
	return (ft_new_rect(ft_new_pt(origin->x, pt->y + 1),
		   rect->width, origin->y + rect->height - pt->y - 1));
}

t_rect		*ft_split_up(t_rect *rect, t_point *pt)
{
	t_point *origin;

	origin = rect->origin;
	if (rect->height < 2 || pt->y == origin->y)
		return (0);
	return (ft_new_rect(ft_new_pt(origin->x, origin->y),
		   rect->width, pt->y - origin->y));
}
