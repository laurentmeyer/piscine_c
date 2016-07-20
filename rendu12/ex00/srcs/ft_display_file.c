/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:46:24 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/20 19:30:07 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

#define BUF_SIZE 4096

void	ft_print_buffer(char *buffer, int out)
{
	int		i;

	i = 0;
	while (buffer[i] != '\0')
	{
		write(out, &buffer[i], 1);
		i++;
	}
}

void	ft_display_file(char *name)
{
	int		fd;
	char	buffer[BUF_SIZE + 1];
	int		i;

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("Problem opening the file\n");
		return ;
	}
	i = read(fd, buffer, BUF_SIZE);
	while (i == BUF_SIZE && i != -1)
	{
		ft_print_buffer(buffer, 1);
		buffer[BUF_SIZE] = '\0';
		i = read(fd, buffer, BUF_SIZE);
	}
	if (i == -1)
		ft_put_error("Problem reading the file\n");
	else
		ft_print_buffer(buffer, 1);
	close(fd);
}
