/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 11:52:56 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 16:28:03 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include "ft.h"
# include "ft_list.h"

typedef	struct	s_point
{
	int			x;
	int			y;
}				t_point;

typedef struct	s_rect
{
	t_point		*origin;
	int			height;
	int			width;
}				t_rect;

typedef struct	s_map
{
	int			height;
	int			width;
	char		empt;
	char		obst;
	char		full;
	t_list		*obst_list;
}				t_map;

t_point			*ft_new_pt(int x, int y);
t_rect			*ft_new_rect(t_point *origin, int h, int w);
void			ft_print_rect_details(t_rect *rect);
void			ft_print_rect_list(t_list *list);
t_point			*ft_new_pt(int x, int y);
void			ft_print_point(t_point *point);
void			ft_print_pt_list(t_list *list);
int				ft_point_in_rec(t_rect *rect, t_point *pt);
t_rect			*ft_split_left(t_rect *rect, t_point *pt);
t_rect			*ft_split_right(t_rect *rect, t_point *pt);
t_rect			*ft_split_up(t_rect *rect, t_point *pt);
t_rect			*ft_split_down(t_rect *rect, t_point *pt);
void			ft_update_link(t_list **to_replace, t_point *pt);
void			ft_update_reclist(t_list **listptr, t_point *pt);
//void			ft_update_reclist(t_list **listptr, t_list *pt_list);
//void			ft_update_reclist(t_list **listptr, t_list **pt_list);
void			ft_update_all(t_list **to_update, t_list *pt_begin);

int				ft_min(int a, int b);
t_rect			*ft_biggest_square(t_list *rec_list);

#endif
