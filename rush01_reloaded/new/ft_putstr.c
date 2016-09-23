/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:58:27 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/13 23:48:48 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_strlen(char *s);

void	ft_putstr(char *str)
{
	if (str == 0)
		return ;
	write(1, str, ft_strlen(str));
	return ;
}
