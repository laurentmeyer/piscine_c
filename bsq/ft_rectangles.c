/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rectangles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:29:31 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 16:28:41 by lmeyer           ###   ########.fr       */
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

/*

   void		ft_update_reclist(t_list **rect_list_beg, t_list **pt_list)
   {
   t_list	*rect_list;
   t_rect	*rect;
   t_point	*pt;

   if (!rect_list_beg || !(*rect_list_beg) || !pt_list || !(*pt_list))
   return ;
   while (*pt_list)
   {
   pt = (t_point *)((*pt_list)->data);
   ft_putstr("\n==POINT==\n");
   ft_print_point(pt);
   rect_list = *rect_list_beg;
   rect = (t_rect *)(rect_list->data);
   ft_putstr("\n==RECT==\n");
   ft_print_rect_details(rect);
   if (!rect || !pt)
   return ;
   if (rect_list->next)
   ft_update_reclist(&(rect_list->next), pt_list);
   ft_update_link(&rect_list, pt);
 *pt_list = (*pt_list)->next;
 }
 }

 void		ft_update_link(t_list **to_replace, t_point *pt)
 {
 t_list	*list;
 t_list	*next;
 t_rect	*rect;
 t_rect	*new;

 if (!to_replace || !(*to_replace))
 return ;
 rect = (t_rect *)((*to_replace)->data);
 if (ft_point_in_rec(rect, pt) == 0)
 return ;
 if (ft_point_in_rec(rect, pt) == 0
 && rect->height == 1 && rect->width == 1)
 {
 ft_putstr("coucou\n");
 *to_replace = (*to_replace)->next;
 return ;
 }
 list = 0;

 new = ft_split_left(rect, pt);
 ft_print_rect_details(new);
 new = ft_split_right(rect, pt);
 ft_print_rect_details(new);
 new = ft_split_up(rect, pt);
 ft_print_rect_details(new);
 new = ft_split_down(rect, pt);
 ft_print_rect_details(new);
 ft_push_back_ifne(&list, new);
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

*/

