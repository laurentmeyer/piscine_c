/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 17:37:31 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/28 17:55:19 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	if (str[0] == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

void		ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

/*
char	hhj
char	*ft_to_hex(int i)
{
	char	hex[8];
	int		i;
*/




int		main(int ac, char **av)
{
//	if (ac == 2)
//		ft_putstr(ft_to_hex(av[1]));
	ft_putchar (0x2a);
	return (0);
}
