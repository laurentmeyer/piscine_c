/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 00:43:45 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 12:14:43 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

int		ft_ultimate_range(int **range, int min, int max)
{
	if (range == 0 || ft_range(min, max) == NULL)
		return (0);
	*range = ft_range(min, max);
	return (max - min);
}
