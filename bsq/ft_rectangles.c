/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rectangles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:29:31 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 19:53:50 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

t_rect		*ft_new_rect(t_point *origin, int w, int h)
{
	t_rect	*rect;

	rect = (t_rect *)malloc(sizeof(t_rect));
	if (rect)
	{
		rect->origin = origin;
		rect->height = h;
		rect->width = w;
	}
	return (rect);
}

void		ft_update_link(t_list **to_replace, t_point *pt)
{
	t_list	*list;
	t_list	*next;
	t_rect	*rect;

	if (!to_replace || !(*to_replace))
		return ;
	rect = (t_rect *)((*to_replace)->data);
	if (ft_point_in_rec(rect, pt) == 0)
		return ;
	list = 0;
	ft_push_back_ifne(&list, ft_split_right(rect, pt));
	ft_push_back_ifne(&list, ft_split_left(rect, pt));
	ft_push_back_ifne(&list, ft_split_up(rect, pt));
	ft_push_back_ifne(&list, ft_split_down(rect, pt));
	next = (*to_replace)->next;
	free(*to_replace);
	*to_replace = list;
	while (list->next)
		list = list->next;
	list->next = next;
}

void		ft_update_reclist(t_list **rect_list, t_point *pt)
{
	t_list	*first;

	if (!rect_list || !pt)
		return ;
	first = *rect_list;
	if (!first)
		return ;
	if ((*rect_list)->next)
		ft_update_reclist(&((*rect_list)->next), pt);
	ft_update_link(rect_list, pt);
}

void		ft_update_all(t_list **to_update, t_list *pt_begin)
{
	if (!pt_begin || !to_update)
		return ;
	if (pt_begin)
	{
		ft_update_reclist(to_update, (t_point *)(pt_begin->data));
		ft_update_all(to_update, pt_begin->next);
	}
}
