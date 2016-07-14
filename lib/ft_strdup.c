/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:20:42 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 12:16:42 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	if (src == NULL)
		return (0);
	return (ft_strcpy((char *)malloc(ft_strlen(src) + 1), src));
}
