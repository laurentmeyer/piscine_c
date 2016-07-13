/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 19:26:56 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/13 17:58:17 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	cc -Wall -Wextra -Werror -o test main.c ex00/libft.a
//	rm libft.a ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o ft_putnbr.o

#include <stdio.h>
#include <string.h>

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
	char	*s1;

	printf("### EX00 ###\n");
	printf("\n*** Test ft_swap ***\n");
	nb1 = 42;
	nb2 = 12;
	printf("before swap: %d\n", nb1);
	printf("should output: %d\n", nb2);
	ft_swap(&nb1, &nb2);
	printf("after swap   : %d\n", nb1);
	printf("\n*** Test ft_putchar ***\n");
	printf("should output: %c\n", '9');
	ft_putstr("    my output: ");
	ft_putchar('9');
	ft_putchar('\n');
	printf("\n*** Test ft_putstr ***\n");
	s1 = "resultat";
	printf("should output: %s\n", s1);
	ft_putstr("    my output: ");
	ft_putstr(s1);
	ft_putchar('\n');
	printf("\n*** Test ft_strlen ***\n");
	s1 = "coucou";
	printf("should output: 7\n");
	printf("    my output: %d\n", ft_strlen(s1));
	printf("\n*** Test ft_strcmp ***\n");
	s1 = "coucou";
	printf("should output: %d\n", strcmp("coucou", "coucoo"));
	printf("    my output: %d\n", ft_strcmp("coucou", "coucoo"));
	return (0);
}
