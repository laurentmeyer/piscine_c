/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_import_stdin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlasne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 23:53:05 by jlasne            #+#    #+#             */
/*   Updated: 2016/07/24 19:03:44 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_import_stdin(void)
{
	char	*str;
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		i;

	i = 0;
	str = (char*)malloc(BUF_SIZE);
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	return (str);
}
