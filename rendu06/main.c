/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 19:26:56 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/13 14:05:47 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);

int		main(void)
{
	int		nb1;
	int		nb2;
	char	s1[] = "coucou";
	char	s2[] = "tata";

	printf("### EX00 ###\n");
	printf("\n*** Test swap function ***\n");
	nb1 = 42;
	nb2 = 12;
	printf("before swap: %d\n", nb1);
	printf("should output: %d\n", nb2);
	ft_swap(&nb1, &nb2);
	printf("after swap   : %d\n", nb1);
	printf("\n*** Test putchar function ***\n");
	printf("should output: %c\n", '9');
	printf("    my output: %c\n", '9');
	

	printf("### EX01 ###\n");
	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}
