/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 15:41:35 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/18 19:27:34 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int	*dest;

	dest = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		dest[i] = (*f)(tab[i]);
		i++;
	}
	return (dest);
}
