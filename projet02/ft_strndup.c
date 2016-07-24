/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:48:56 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 12:00:34 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"

char	*ft_strndup(char *src, unsigned int n)
{
	char	*result;

	if (src == NULL)
		return (0);
	result = (char *)malloc((n + 1) * sizeof(char));
	if (result)
		*(ft_strncpy(result, src, n) + n) = '\0';
	return (result);
}
