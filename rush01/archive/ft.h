/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 23:29:59 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/16 23:43:51 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str);
char	*ft_concat_params(int argc, char **argv);
int		ft_count_words(char *str);
int		ft_iterative_power(int nb, int power);
void	ft_print_words_tables(char **tab);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		*ft_range(int min, int max);
char	**ft_split_whitespaces(char *str);
char	*ft_strcat(char *stra, char *strb);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);
int		ft_ultimate_range(int **range, int min, int max);

#endif
