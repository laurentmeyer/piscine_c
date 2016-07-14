/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 09:28:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 11:57:40 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		acc;
	char	*str;

	if (argc == 1)
		return (0);
	i = 1;
	while (i <= argc)
	{
		acc = acc + ft_strlen(argv[i]) + 1;
		i++;
	}
	str = (char *)malloc(acc);
	i = 1;
	acc = 0;
	while (i < argc)
	{
		ft_strcpy(str + acc, argv[i]);
		*(str + acc + ft_strlen(argv[i]) + 1) = '\n';
		i++;
		acc = acc + ft_strlen(argv[i]) + 1;
	}
	ft_strcpy(str + acc, argv[i]);
	*(str + acc + ft_strlen(argv[i]) + 1) = '\0';
	return (str);
}
