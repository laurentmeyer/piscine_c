/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_import.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 19:20:55 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/27 19:28:31 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

#define BUF_SIZE 4096

char    *ft_first_line(char *str)
{
	int     i;
	char    *first_line;

	i = 0;
	while(str[i] != '\n')
		i++;
	first_line = (char*)malloc(sizeof(char) * i);
	i++;
	i = 0;
	while (str[i] != '\n')
	{
		first_line[i] = str[i];
		i++;
	}
	first_line[i] = '\0';
	return(first_line);
}

char    *ft_str_dup(char *str, int i)
{
	char *dup;
	int     j;

	j = 0;
	dup = NULL;
	dup = (char*)malloc(sizeof(char) * i);
	if(dup)
	{
		while(j < i && str[j] != '\0')
		{
			dup[j] = str[j];
			j++;
		}
		dup[j] = '\0';
	}
	return (dup);
}

char    *ft_str_append(t_list **list)
{
	t_list  *tmp;
	int     i;
	int     j;
	char    *str;

	str = (char*)malloc(sizeof(char*) * ft_list_size(list) * (BUF_SIZE + 1));
	i = 0;
	tmp = *list;
	if (str)
	{
		while (tmp)
		{
			j = 0;
			while (*((char*)(tmp->data) + j) != '\0')
			{
				str[i] = *((char*)(tmp->data) + j);
				i++;
				j++;
			}
			tmp = tmp->next;
		}
	}
	return (str);
}

t_list  *ft_count_points(char *str, char c)
{
	t_list  *points;
	int     y;
	int     x;
	int     i;

	y = 0;
	x = 0;
	i = 0;
	points = NULL;
	while(str[i] != '\n')
		i++;
	i++;
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
		{
			y++;
			x = 0;
		}
		if(str[i] == c)
			ft_list_push_back(&points, ft_new_pt(x, y));
		x++;
		i++;
	}
	return (points);
}

void    ft_print_points(t_list *list)
{
	t_list  *tmp;

	tmp  = list;
	while (tmp)
	{
		ft_putnbr(((t_point*)(tmp->data))->x);
		ft_putstr(" ");
		ft_putnbr(((t_point*)(tmp->data))->y);
		ft_putstr("\n");
		tmp = tmp->next;
	}
}

int     ft_check_width(char *str)
{
	int     i;
	int     x;
	int     j;

	i = 0;
	x = 0;
	while(str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\n')
	{
		i++;
		x++;
	}
	i++;
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i] != '\n')
		{
			j++;
			i++;
		}
		if(j != x)
			return (0);
		i++;
	}
	return (x);
}

int     ft_check_height(char *str)
{
	int     y;
	int     i;

	i = 0;
	y = 0;
	while(str[i] != '\n')
		i++;
	i++;
	while(str[i] != '\0')
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

int     ft_check_chars(char *str, char a, char b)
{
	int i;

	i = 0;
	while(str[i] != '\n')
		i++;
	i++;
	while(str[i] != '\0')
	{
		if (str[i] != a && str[i] != b && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}


char    ft_get_char(char *str, int k)
{
	int     i;

	i = 0;
	while(str[i] <= '0' && str[i] >= '9')
		i++;
	if(str[i + 3] != '\n')
		return (0);
	else
		return (str[i + k - 1]);
}

void    ft_load_map(t_list **list, t_map **map)
{
	char    *str;

	t_list  *points;
	str = malloc(sizeof(char) * BUF_SIZE + 1);
	while(read(0, str, BUF_SIZE))
	{
		str[BUF_SIZE + 1] = '\0';
		ft_list_push_back(list, ft_str_dup(str, BUF_SIZE));
		str = malloc(sizeof(char) * BUF_SIZE + 1);
	}
	ft_putstr("\n");
	str = ft_str_append(list);
	ft_putstr("\n");
	ft_putstr(str);
	ft_putstr("\nvoici la premiere ligne : ");
	ft_putstr(ft_first_line(str));
	ft_putstr("\nvoici les coordonnes des obstacles : \n");
	points = ft_count_points(str, 'o');
	ft_print_points(points);
	ft_putstr("\nlargeur : ");
	ft_putnbr(ft_check_width(str));
	ft_putstr("\nhauteur : ");
	ft_putnbr(ft_check_height(str));
	ft_putstr("\nresultat du check de la validite des caracteres : ");
	ft_putnbr(ft_check_chars(str, 'o', '.'));

	(*map)->height = ft_check_height(str);
	(*map)->width = ft_check_width(str);
	(*map)->empt = ft_get_char(str, 1);
	(*map)->obst = ft_get_char(str, 2);
	(*map)->full = ft_get_char(str, 3);
	(*map)->obst_list = ft_count_points(str, 2);
}


int     ft_read_map(t_map **map)
{
	t_list  *list;

	ft_load_map(&list, map);
	return (1);
}

/*
int     main(int argc, char **argv)
{
	t_map   *map;
	int     n;

	(void)argv;
	map = (t_map*)malloc(sizeof(t_map));
	if (argc < 2)
	{
		ft_read_map(&map);
		return (0);
	}
	n = 1;
	while (n < argc)
	{
		n++;
	}
	return (0);
}
*/
