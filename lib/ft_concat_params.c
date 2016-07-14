/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 09:28:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 23:06:07 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *stra, char *strb);

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc <= 1 || argv == 0)
		return (0);
	str = argv[2];
	i = 3;
	while (i <= argc)
	{
		str = ft_strcat(str, "\n");
		str = ft_strcat(str, argv[i]);
		i++;
	}
	return (str);
}
