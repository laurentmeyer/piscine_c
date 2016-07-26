/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rectangles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:29:31 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/26 21:05:56 by lmeyer           ###   ########.fr       */
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

void		ft_print_rect_details(t_rect *rect)
{
	if (rect)
	{
		ft_putstr("origin: ");
		ft_putchar('\n');
		ft_print_point(rect->origin);
		ft_putstr("Width = ");
		ft_putnbr(rect->width);
		ft_putchar('\n');
		ft_putstr("Height = ");
		ft_putnbr(rect->height);
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

void		ft_update_reclist(t_list **listptr, t_point *pt)
{
	t_list	*first;
	
	if (!listptr || !pt)
		return ;
	first = *listptr;
	if (!first)
		return ;
	if ((*listptr)->next)
		ft_update_reclist(&((*listptr)->next), pt);
	ft_update_link(listptr, pt);
}

/*
void		ft_update_reclist(t_list **list_begin, t_point *pt)
{
	t_rect	*rect;
	t_list	*list;
	t_list	*next;
	t_list	*replacement;

	
	if (!list_begin || !pt)
		return ;
	&list = list_begin;
	while (list)
	{
		next = list->next;
		rect = (t_rect *)(list->data);
		ft_putstr("==RECT==\n");
		ft_print_rect_details(rect);
		ft_putstr("==RECT==\n");
		if (ft_point_in_rec(rect, pt))
		{
			ft_putstr("INTHEIF\n");
			replacement = ft_update_rectangle(rect, pt);
			ft_list_replace(&list, replacement);
		}
		list = next;
	}
}
*/
