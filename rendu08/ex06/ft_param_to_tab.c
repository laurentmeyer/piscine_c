/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 19:00:08 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/16 21:41:41 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	if (src == NULL)
		return (0);
	return (ft_strcpy((char *)malloc(ft_strlen(src) + 1), src));
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*dest;
	int					i;

	dest = (struct s_stock_par *)malloc((ac + 1)
			* sizeof(struct	s_stock_par));
	i = 0;
	while (i < ac)
	{
		dest[i].size_param = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		dest[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	dest[ac].size_param = 0;
	dest[ac].str = 0;
	dest[ac].copy = 0;
	dest[ac].tab = 0;
	return (dest);
}
