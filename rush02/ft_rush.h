/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 21:31:50 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/23 23:52:35 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <stdlib.h>
# include "ft.h"

char	ft_colle00_chars(int c, int cols, int lines);
char	ft_colle01_chars(int c, int cols, int lines);
char	ft_colle02_chars(int c, int cols, int lines);
char	ft_colle03_chars(int c, int cols, int lines);
char	ft_colle04_chars(int c, int cols, int lines);
char	*ft_colle_x(int cols, int lines, int colle);
int		ft_valid_input(char *str);
int		ft_count_l(char *str);
int		ft_count_c(char *str);
char	*ft_format_sudoku(char *str);

#endif
