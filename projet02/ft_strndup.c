/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:48:56 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 19:45:17 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"

char	*ft_strndup(char *src, unsigned int n)
{
	char			*result;
	unsigned int	i;

	if (src == NULL)
		return (0);
	result = (char *)malloc((n + 1) * sizeof(char));
	if (result)
	{
		i = 0;
		while (i < n && src[i])
		{
			result[i] = src[i];
			i++;
		}
	}
	return (result);
}
