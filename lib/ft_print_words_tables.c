/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:10:58 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 22:46:04 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_print_words_tables(char **tab)
{
	int i;

	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}