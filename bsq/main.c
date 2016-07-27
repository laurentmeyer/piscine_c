/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:47:13 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 16:36:50 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int main(void)
{
	
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

	/*
	ft_putstr("\nTEST DE UPDATE LINKS SUCCESSIFS\n");
	t_point	*point;
	t_rect	*rect;
	rect = ft_new_rect(ft_new_pt(0, 0), 22, 15);
	rec_list = 0;
	ft_list_push_back(&rec_list, rect);
//	ft_print_rect_list(rec_list);
//	ft_putstr("\n===============\n");
	point = ft_new_pt(6, 14);
	ft_update_reclist(&rec_list, point);
//	ft_print_rect_list(rec_list);
	point = ft_new_pt(0, 0);
	ft_update_reclist(&rec_list, point);
//	ft_putstr("\n===============\n");
//	ft_print_rect_list(rec_list);
	point = ft_new_pt(2, 4);
	ft_update_reclist(&rec_list, point);
	point = ft_new_pt(9, 8);
	ft_update_reclist(&rec_list, point);
	point = ft_new_pt(14, 4);
	ft_update_reclist(&rec_list, point);
//	ft_putstr("\n===============\n");
	ft_print_rect_list(rec_list);
	ft_putstr("\n===============\n");
	ft_print_rect_details(ft_biggest_square(rec_list));
	*/
	
	
	ft_putstr("\nTEST DE UPDATE ALL\n");
	t_list	*pt_list;
	t_list	*rec_list;

	rec_list = 0;
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(0, 0), 22, 15));
	pt_list = 0;
	ft_list_push_back(&pt_list, ft_new_pt(2, 0));
	ft_list_push_back(&pt_list, ft_new_pt(3, 0));
	ft_list_push_back(&pt_list, ft_new_pt(9, 7));
	ft_list_push_back(&pt_list, ft_new_pt(18, 12));
	ft_list_push_back(&pt_list, ft_new_pt(21, 3));
	ft_list_push_back(&pt_list, ft_new_pt(0, 14));
	ft_list_push_back(&pt_list, ft_new_pt(3, 1));
	ft_list_push_back(&pt_list, ft_new_pt(9, 1));
	ft_list_push_back(&pt_list, ft_new_pt(9, 14));
	ft_list_push_back(&pt_list, ft_new_pt(0, 3));
	ft_list_push_back(&pt_list, ft_new_pt(3, 11));
	ft_list_push_back(&pt_list, ft_new_pt(4, 6));
	ft_list_push_back(&pt_list, ft_new_pt(14, 0));
	ft_list_push_back(&pt_list, ft_new_pt(15, 4));
	ft_list_push_back(&pt_list, ft_new_pt(13, 9));
	ft_list_push_back(&pt_list, ft_new_pt(18, 8));
	ft_update_all(&rec_list, pt_list);
//	ft_putstr("\n===============\n");
	ft_print_rect_list(rec_list);
	ft_putstr("\n===============\n");
	ft_print_rect_details(ft_biggest_square(rec_list));



	/*
	
	//TEST DE UPDATE LINK
	pt_list = 0;
	ft_list_push_back(&pt_list, ft_new_pt(6, 14));
	ft_print_pt_list(pt_list);
	rec_list = 0;
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(0, 0), 22, 15));
	ft_update_link(&rec_list,ft_new_pt(6, 14));
	ft_print_rect_list(rec_list);
	ft_putstr("\n===============\n");
	ft_print_rect_details(ft_biggest_square(rec_list));
	*/
	
	/*
	//TEST DE UPDATE RECLIST
	pt_list = 0;
	ft_list_push_back(&pt_list, ft_new_pt(6, 14));
	ft_print_pt_list(pt_list);
	rec_list = 0;
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(0, 0), 22, 15));
	ft_update_reclist(&rec_list, &pt_list);
	ft_print_rect_list(rec_list);
	ft_putstr("\n===============\n");
	ft_print_rect_details(ft_biggest_square(rec_list));
	*/

	/*
	//GROS TEST DE UPDATE RECLIST
	pt_list = 0;
	ft_list_push_back(&pt_list, ft_new_pt(0, 0));
	ft_list_push_back(&pt_list, ft_new_pt(0, 11));
	ft_list_push_back(&pt_list, ft_new_pt(0, 14));
	ft_list_push_back(&pt_list, ft_new_pt(11, 0));
	ft_list_push_back(&pt_list, ft_new_pt(21, 0));
	ft_list_push_back(&pt_list, ft_new_pt(21, 9));
	ft_list_push_back(&pt_list, ft_new_pt(21, 14));
	ft_list_push_back(&pt_list, ft_new_pt(2, 4));
	ft_list_push_back(&pt_list, ft_new_pt(3, 9));
	ft_list_push_back(&pt_list, ft_new_pt(9, 8));
	ft_list_push_back(&pt_list, ft_new_pt(5, 12));
	ft_list_push_back(&pt_list, ft_new_pt(6, 11));
	ft_list_push_back(&pt_list, ft_new_pt(9, 6));
	ft_list_push_back(&pt_list, ft_new_pt(7, 13));
	ft_list_push_back(&pt_list, ft_new_pt(16, 0));
	ft_list_push_back(&pt_list, ft_new_pt(9, 3));
	ft_list_push_back(&pt_list, ft_new_pt(6, 14));
	ft_list_push_back(&pt_list, ft_new_pt(17, 2));
	ft_list_push_back(&pt_list, ft_new_pt(20, 2));
	ft_list_push_back(&pt_list, ft_new_pt(10, 8));
	ft_list_push_back(&pt_list, ft_new_pt(12, 6));
	ft_list_push_back(&pt_list, ft_new_pt(3, 7));
	ft_list_push_back(&pt_list, ft_new_pt(8, 4));
	ft_list_push_back(&pt_list, ft_new_pt(21, 12));
	ft_print_pt_list(pt_list);
	rec_list = 0;
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(0, 0), 22, 15));
	ft_update_reclist(&rec_list, &pt_list);
	ft_putstr("\n===============\n");
	ft_print_rect_details(ft_biggest_square(rec_list));
	*/

	

	return (0);
}
