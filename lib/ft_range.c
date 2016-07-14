/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 21:34:18 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 11:28:28 by lmeyer           ###   ########.fr       */
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
