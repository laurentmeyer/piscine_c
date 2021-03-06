/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:20:42 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/17 07:16:52 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	*ft_strdup(char *src)
{
	if (src == NULL)
		return (0);
	return (ft_strcpy((char *)malloc(ft_strlen(src) + 1), src));
}
