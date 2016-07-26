/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:47:13 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/26 21:13:42 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int main(void)
{
	t_rect	*rect;
	t_point	*point;
	t_list	*rec_list;
//	t_list	*pt_list;
	
	/*
	rec_list = 0;
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(2, 7), 2, 3));
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(3, 7), 2, 3));
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(4, 7), 2, 3));
	ft_print_rect_list(rec_list);
	ft_putstr("===============\n");
	t_list	*replacement;
	replacement = ft_create_elem(ft_new_rect(ft_new_pt(1, 1), 6, 6));
	ft_list_push_back(&replacement, ft_new_rect(ft_new_pt(5, 5), 5, 5));
	ft_list_replace(&rec_list, replacement);
	ft_print_rect_list(rec_list);

	rect = ft_new_rect(ft_new_pt(53, 18), 22, 15);
	ft_print_rect_details(rect);
	ft_putstr("===============\n");
	ft_print_rect_details(ft_split_left(rect, ft_new_pt(53, 20)));
	ft_putstr("===============\n");
	ft_print_rect_details(ft_split_right(rect, ft_new_pt(53, 20)));
	ft_putstr("===============\n");
	ft_print_rect_details(ft_split_up(rect, ft_new_pt(53, 20)));
	ft_putstr("===============\n");
	ft_print_rect_details(ft_split_down(rect, ft_new_pt(53, 20)));
	*/

	/*
	rect = ft_new_rect(ft_new_pt(53, 18), 22, 15);
	point = ft_new_pt(53, 20);
	ft_print_rect_details(rect);
	rec_list = ft_update_rectangle(rect, point);
	ft_print_rect_list(rec_list);
	t_rect	*rect = ft_new_rect(ft_new_pt(0, 0), 22, 15);
	t_point	*point = ft_new_pt(8, 5);
	rec_list = 0;
	ft_list_push_back(&rec_list, rect);
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(2, 2), 22, 15));
	ft_print_rect_list(rec_list);
	ft_putstr("===============\n");
//	ft_update_link(&rec_list, point);
	ft_update_reclist(&rec_list, point);
	ft_print_rect_list(rec_list);
	*/

	rect = ft_new_rect(ft_new_pt(0, 0), 22, 15);
	rec_list = 0;
	ft_list_push_back(&rec_list, rect);
	ft_print_rect_list(rec_list);
	ft_putstr("\n===============\n");
	point = ft_new_pt(8, 5);
	ft_update_reclist(&rec_list, point);
	ft_print_rect_list(rec_list);
	point = ft_new_pt(0, 0);
	ft_update_reclist(&rec_list, point);
	ft_putstr("\n===============\n");
	ft_print_rect_list(rec_list);
	

	return (0);
}
