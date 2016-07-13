/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 19:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/13 23:35:20 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putstr(char *str);
char	*ft_strdup(char *src);
void	ft_putnbr(int nb);
int		*ft_range(int min, int max);

int		main(void)
{
	char	*empty;
	char	str[] = "Pif paf pouf";
	int		min;
	int		max;
	int		i;

	ft_putstr("### EXERCICE 1 ###\n");
	ft_putstr("\nCase of null pointer\n");
	ft_putstr(ft_strdup(NULL));
	ft_putstr("\nSource string      = ");
	ft_putstr(str);
	ft_putstr("\nDestination string = ");
	ft_putstr(ft_strdup(str));
	ft_putstr("\n\n");
	ft_putstr("### EXERCICE 2 ###\n");
	ft_putstr("\nCase of min equal to max, should output one: ");
	ft_putnbr(ft_range(0, 0) == 0);
	ft_putstr("\nAll integers between -2147483648 and -2147483645 : \n");
	min = -12;
	max = 12;
	i = 0;
	while (i < max - min)
	{
		printf("%d ", *(ft_range(min, max) + 4 * i));
		i++;
	}
	return (0);
}
