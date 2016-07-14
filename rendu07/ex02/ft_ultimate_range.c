/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 00:43:45 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 11:29:07 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int	diff;
	int *start;

	diff = max - min;
	if (diff <= 0)
		return (0);
	start = (int *)malloc(4 * diff);
	i = 0;
	while (i < diff)
	{
		*(start + i) = min + i;
		i++;
	}
	return (start);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	if (range == 0 || ft_range(min, max) == NULL)
		return (0);
	*range = ft_range(min, max);
	return (max - min);
}
