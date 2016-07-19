/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 21:58:31 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/19 22:53:07 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

#include "ft.h"

typedef void	(*t_ftptr)(int, int);

void			ft_print_addition(int a, int b);
void			ft_print_subtraction(int a, int b);
void			ft_print_multiplication(int a, int b);
void			ft_print_division(int a, int b);
void			ft_print_modulo(int a, int b);
void			ft_print_zero(int a, int b);
t_ftptr			ft_do_op(char *str);

#endif
