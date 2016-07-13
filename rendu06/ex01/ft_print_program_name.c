/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 16:06:35 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/13 16:35:14 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (*str != 0)
	{
		ft_putchar(*str);
		ft_putstr(str + 1);
	}
	return ;
}

int		main(int argc, char **argv)
{
	int a;

	a = argc;
	ft_putstr(*argv);
	ft_putchar('\n');
	return (0);
}
