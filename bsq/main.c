/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:47:13 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/25 20:43:56 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int main(void)
{
	t_list	*rec_list;
	t_list	*replacement;
	
	rec_list = ft_create_elem(ft_new_rect(ft_new_pt(2, 4), 4, 6));
	ft_list_push_back(&rec_list, ft_new_rect(ft_new_pt(2, 7), 2, 3));
	ft_print_rect_list(rec_list);
	ft_putstr("===============\n");
	replacement = ft_create_elem(ft_new_rect(ft_new_pt(1, 1), 6, 6));
	ft_list_push_back(&replacement, ft_new_rect(ft_new_pt(5, 5), 5, 5));
	ft_list_replace(&rec_list, replacement);
	ft_print_rect_list(rec_list);


	ft_putnbr(ft_point_in_rec(ft_new_rect(ft_new_pt(1, 1), 2, 2), ft_new_pt(2, 2)));

	return (0);
}
