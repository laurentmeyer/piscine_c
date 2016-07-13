/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 21:34:18 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/13 22:41:22 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putnbr(int i);

int		*ft_range(int min, int max)
{
	int i;
	int	diff;
	int *start;	

	diff = max - min;
	if (diff <= 0)
		return (0);
	start =	(int *)malloc(diff);
	while (i < diff)
	{
		*(start + 4 * i) = min + i;
		i++;
	}
	return (start);
}
