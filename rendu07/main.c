/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 19:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 22:42:36 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str);
char	*ft_strdup(char *src);
void	ft_putnbr(int nb);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	*ft_strcat(char *stra, char *strb);
int     ft_count_words(char *str);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);
	
int		main(int argc, char **argv)
{
	char	str[] = "Pif paf pouf";
	int		min;
	int		max;
	int		i;
	int		*start;
	int		*array;
	int		**doubleptr;
	char	**dbcharptr;
	char	*charptr;

	ft_putstr("\n\n### EXERCICE 0 ###\n\n");
	ft_putstr(ft_strdup(NULL));
	ft_putstr("Case of null pointer OK");
	ft_putstr(ft_strdup(""));
	ft_putstr("\nCase of empty string OK");
	ft_putstr("\nSource string      = ");
	ft_putstr(str);
	ft_putstr("\nDestination string = ");
	ft_putstr(ft_strdup(str));



	ft_putstr("\n\n### EXERCICE 1 ###\n\n");
	ft_putstr("Case of min equal to max, should output one 'cause NULL: ");
	ft_putnbr(ft_range(0, 0) == 0);
	ft_putstr("\nCase of min lower than max, should output one 'cause NULL: ");
	ft_putnbr(ft_range(0, -1) == 0);
	ft_putstr("\nAll integers between -2147483648 and -2147483644 : \n");
	min = -2147483648;
	max = -2147483644;
	start = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		ft_putnbr(*(start + i));
		ft_putstr(" ");
		i++;
	}
	ft_putstr("\nAll integers between 2147483645 and 2147483647 : \n");
	min = 2147483645;
	max = 2147483647;
	start = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		ft_putnbr(*(start + i));
		ft_putstr("\n");
		i++;
	}



	ft_putstr("\n\n### EXERCICE 2 ###\n\n");
	ft_putstr("\nGeneral case\n");
	ft_putstr("We create an array of integers of size 1 with only value = 7\n");
	array = (int *)malloc(1);
	*array = 7;
	ft_putnbr(array[0]);
	ft_putstr("\nThen we replace it with an array of numbers from -5 to +5:\n");
	min = -5;
	max = 5;
	ft_ultimate_range(&array, -5, 5);
	i = 0;
	while (i < max - min)
	{
		ft_putnbr(*(array + i));
		ft_putstr(" ");
		i++;
	}
	ft_putstr("\nCase of min equal to max, should output one 'cause NULL: \n");
	ft_putnbr(ft_ultimate_range(&array, 0, 0) == 0);
	ft_putstr("\nCase of null pointer passed in range (OK if one): \n");
	doubleptr = 0;
	ft_putnbr(ft_ultimate_range(doubleptr, 0, 5) == 0);



	ft_putstr("\n\n### EXERCICE 3 ###\n\n");
	ft_putstr("\nTest with some params and without params\n");
	ft_strcat("coucou ", "c'est nous");
	ft_putstr(ft_concat_params(argc, argv));
	argc = 0;
	argv = 0;



	ft_putstr("\n\n### EXERCICE 4 ###\n\n");
	charptr = "   cou\ncou coo \tl gdf iu76   !  ";
	ft_putstr(charptr);
	ft_putstr("\nNombre de mots :\n");
	ft_putnbr(ft_count_words(charptr));
	ft_putstr("\nList strings:\n");
	i = 0;
	dbcharptr = ft_split_whitespaces(charptr);
	while (i < ft_count_words(charptr))
	{
		ft_putstr(dbcharptr[i]);
		ft_putstr("\n");
		i++;
	}
	ft_putstr("\nCheck that last one is NULL: \n");
	ft_putnbr(dbcharptr[ft_count_words(charptr)] == 0);
	ft_putstr("\nCheck that original string has not been changed\n");
	ft_putstr(charptr);



	ft_putstr("\n\n### EXERCICE 4 ###\n\n");
	ft_print_words_tables(dbcharptr);
	ft_putstr("##### END #####\n");



	return (0);
}
