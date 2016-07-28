/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:58:39 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/28 16:24:57 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

/*
char	*ft_strrev(char *str)
{
	char	ret[ft_strlen(str) + 1];
	char	copy[ft_strlen(str) + 1];
	int		length;
	int 	i;

	length = ft_strlen(str);
	i = 0;
	while (i < length)
	{
		copy[i] = str[i];
		i++;
	}
	i = 0;
	while (i < length + 1)
	{
		ret[i] = copy[length - i - 1];
		i++;
	}
	i = 0;
	while (i < length)
	{
		str[i] = ret[i];
		i++;
	}

	ft_putchar('M');
	return (str);
}
*/

char	*ft_strrev(char *str)
{
	char	a;
	int		l;
	int		i;


	l = ft_strlen(str);
	ft_putchar('0' + l);
	i = 0;
	while (i < l / 2)
	{
		a = str[l - i - 1];
		str[l - i - 1] = str[i];
		str[i] = a;
		i++;
		ft_putchar('0' + i);
	}
	return (str);
}
