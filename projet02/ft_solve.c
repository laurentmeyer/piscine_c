/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 13:12:34 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 21:25:01 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"

typedef	int	(*t_func)(int, int);

int		ft_arrlen(char **arr)
{
	int i;

	i = 0;
	while (arr[i] != 0)
		i++;
	return (i);
}

t_func	ft_what_op(char c)
{
	if (c == '*')
	{
		ft_putstr("coucou");
		return (&ft_multiply);
	}
	if (c == '/')
		return (&ft_divide);
	if (c == '%')
		return (&ft_modulo);
	if (c == '-')
		return (&ft_subtract);
	if (c == '+')
		return (&ft_add);
	else
		return (0);
}


char	**ft_do_op(char **arr, int pos)
{
	int		i;
	char	**res;
	t_func	funk;

	res = (char **)malloc((ft_arrlen(arr) + 1) * sizeof(char *));
	i = 0;
	while (i < pos)
	{
		res[i] = arr[i];
		i++;
	}
	funk = *((t_func *)(ft_what_op(arr[pos][0])));
	ft_putchar(ft_itoa(funk(ft_atoi(arr[pos - 1]), ft_atoi(arr[pos + 1]))));
	res[i] = ft_itoa(funk(ft_atoi(arr[pos - 1]), ft_atoi(arr[pos + 1])));
	i++;
	while (arr[i + 2] != 0)
	{
		res[i] = arr[i + 2];
		i++;
	}
	res[i] = 0;
	free(arr);
	return (res);
}



char	**ft_solve_priority(char **arr)
{
	//char	**res;
	int		i;

	if (arr[0] == 0)
		return (0);
	else if (arr[1] == 0)
		return (arr);
	else
	{
		i = 1;
		while (arr[i][0] != '%' && arr[i][0] != '/' && arr[i][0] != '*')
		{
			if (arr[i] == 0)
				return (arr);
			i = i + 2;
		}
		return (ft_do_op(arr, i));
	}
}
