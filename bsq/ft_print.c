/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 17:22:40 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 19:53:55 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

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

void		ft_print_pt_list(t_list *list)
{
	if (list)
	{
		ft_print_point((t_point *)(list->data));
		ft_print_pt_list(list->next);
	}
}

void		ft_print_result(t_rect *sq, t_map *map)
{
	char	str[sq->height];
	int		i;
	int		count;

	i = 0;
	while (i < sq->height)
	{
		str[i] = map->full;
		i++;
	}
	count = (map->height - sq->origin->y) * (map->width + 1)
		+ (sq->origin->x - 1);
	write(1, map->str, count);
	map->str = map->str + count;
	i = 0;
	while (i < sq->height)
	{
		write(1, str, sq->height);
		map->str = map->str + sq->height;
		write(1, map->str, (map->width + 1));
		map->str = map->str + (map->width + 1);
		i++;
	}
	write(1, map->str, (map->width + 1) - (sq->origin->x + sq->width));
}
