/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 10:56:49 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 15:31:58 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	colle(int a, int b);
void	putchar(char c);
int		ft_atoi(char *str);

int		main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	colle(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
