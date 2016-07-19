/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 18:09:01 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/18 19:03:02 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any_int(int *tab, int length, int (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int		ft_is_pos(int i)
{
	return (i > 0);
}

int		ft_is_neg(int i)
{
	return (i < 0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int evo[length - 1];

	if (length <= 2)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		evo[i] = f(tab[i], tab[i + 1]);
		i++;
	}
	if (ft_any_int(evo, length - 1, &ft_is_pos)
			&& ft_any_int(evo, length - 1, &ft_is_neg))
		return (0);
	else
		return (1);
}
