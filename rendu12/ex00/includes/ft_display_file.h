/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 15:42:52 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/20 19:30:13 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_put_error(char *str);
void	ft_print_buffer(char *buffer, int out);
void	ft_display_file(char *name);

#endif
