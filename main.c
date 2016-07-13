/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:48:36 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/12 20:36:47 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		atoi(char *str);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);

int		main(void)
{
	char	s1[] = "";
	char	s2[] = ""; 


	ft_putstr("them: \n");
	ft_putnbr((strstr(s1, s2)) == 0);
	ft_putchar('\n');
	ft_putstr("mine: \n");
	ft_putnbr((ft_strstr(s1, s2)) == 0);
	ft_putchar('\n');
	/*
	ft_putstr("them: \n");
	ft_putnbr((strstr(str, to_find)) == 0);
	ft_putchar('\n');
	ft_putstr("mine: \n");
	ft_putnbr((ft_strstr(str, to_find)) == 0);
	ft_putchar('\n');
	ft_putstr("them: \n");
	ft_putstr(strstr(str, to_find));
	ft_putchar('\n');
	ft_putstr("mine: \n");
	ft_putstr(ft_strstr(str, to_find));
	ft_putchar('\n');
	ft_putstr("Salut c'est cool\n");
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-12);
 	ft_putchar('\n');
	ft_putnbr(atoi("-2147483648"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("-2147483648"));
	ft_putchar('\n');
	ft_putnbr(atoi("--23"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("--23"));
	ft_putchar('\n');
	ft_putnbr(atoi("\n\r2"));
	ft_putchar('\n');
	ft_putnbr(ft_atoi("\n\r2"));
	ft_putchar('\n');
	ft_putchar('\n');
	*/
	return (0);
}
