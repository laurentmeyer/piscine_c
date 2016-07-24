/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_project.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 08:54:02 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 12:40:38 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROJECT_H
# define FT_PROJECT_H

# include <stdlib.h>
# include <unistd.h>

typedef	int	(*t_oper)(int, int);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_multiply(int a, int b);
int		ft_divide(int a, int b);
int		ft_modulo(int a, int b);
int		ft_add(int a, int b);
int		ft_subtract(int a, int b);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);
int		ft_count_words(char *str);
char	**ft_split_whitespaces(char *str);
char	*ft_strndup(char *src, unsigned int n);
char	**ft_split_symbols(char *str);

#endif
