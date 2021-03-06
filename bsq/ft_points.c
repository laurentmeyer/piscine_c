/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_points.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:26:50 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 19:47:09 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

t_point			*ft_new_pt(int x, int y)
{
	t_point	*point;

	point = (t_point *)malloc(sizeof(t_point));
	if (point)
	{
		point->x = x;
		point->y = y;
	}
	return (point);
}

void		ft_print_point(t_point *point)
{
	if (point)
	{
		ft_putstr("x = ");
		ft_putnbr(point->x);
		ft_putchar('\n');
		ft_putstr("y = ");
		ft_putnbr(point->y);
		ft_putchar('\n');
	}
}

int			ft_point_in_rec(t_rect *rect, t_point *pt)
{
	t_point	*origin;

	if (!rect || !pt)
		return (0);
	origin = rect->origin;
	if (origin->x <= pt->x
			&& (origin->x + rect->width) > pt->x
			&& origin->y <= pt->y
			&& (origin->y + rect->height) > pt->y)
		return(1);
	else
		return (0);
}
