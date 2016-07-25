/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rectangles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:29:31 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/25 20:43:52 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

t_rect		*ft_new_rect(t_point *start, int h, int w)
{
	t_rect	*rect;
	rect = (t_rect *)malloc(sizeof(t_rect));
	if (rect)
	{
		rect->start = start;
		rect->height = h;
		rect->width = w;
	}
	return (rect);
}

void		ft_print_rect_details(t_rect *rect)
{
	if (rect)
	{
		ft_putstr("Start: ");
		ft_putchar('\n');
		ft_print_point(rect->start);
		ft_putstr("Height = ");
		ft_putnbr(rect->height);
		ft_putchar('\n');
		ft_putstr("Width = ");
		ft_putnbr(rect->width);
		ft_putchar('\n');
		ft_putchar('\n');
	}
}

void		ft_print_rect_list(t_list *list)
{
	if (list)
	{
		ft_print_rect_details((t_rect *)(list->data));
		ft_print_rect_list(list->next);
	}
}

t_list		*ft_update_rectangle(t_rect *rect, t_point *pt)
{
	t_list	*list;
	t_rect	*new;

	list = 0;
	if ((pt->x == rect->start->x) && rect->width > 1)
	{
		new = ft_new_rect(ft_new_pt(rect->start->x + 1, rect->start->y),
			   rect->width - 1, rect->height);
		ft_list_push_back(&list, new);
}

void		ft_update_reclist(t_list *list, t_point *pt)
{
	if 
}
