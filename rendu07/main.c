/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 19:12:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/13 20:20:02 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
char	*ft_strdup(char *src);

int		main(void)
{
	char str[] = "Pif paf pouf";

	ft_putstr("### EXERCICE 1 ###\n");
	ft_putstr("\nSource string      = ");
	ft_putstr(str);
	ft_putstr("\nDestination string = ");
	ft_putstr(ft_strdup(str));
	ft_putstr("\n\n");
	return (0);
}
