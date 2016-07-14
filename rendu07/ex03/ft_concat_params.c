/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 23:02:07 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 23:09:03 by lmeyer           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	if (src == NULL)
		return (0);
	return (ft_strcpy((char *)malloc(ft_strlen(src) + 1), src));
}

char	*ft_strcat(char *stra, char *strb)
{
	char	*dest;

	if (stra == 0 && strb == 0)
		return (0);
	if (stra == 0)
		return (ft_strdup(strb));
	if (strb == 0)
		return (ft_strdup(stra));
	dest = (char *)malloc(ft_strlen(stra) + ft_strlen(strb) + 1);
	ft_strcpy(dest, stra);
	ft_strcpy(dest + ft_strlen(stra), strb);
	*(dest + ft_strlen(stra) + ft_strlen(strb) + 1) = '\0';
	return (dest);
}

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
