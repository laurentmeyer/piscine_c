/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 10:09:17 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/16 21:20:06 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a != n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a != n)
	{
		dest[a] = 0;
		a++;
	}
	return (dest);
}

int		ft_count_words(char *str)
{
	int i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
		i++;
	return (1 + ft_count_words(str + i));
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		w;
	int		i;
	int		j;
	int		words;

	array = (char **)malloc((ft_count_words(str) + 1) * sizeof(char*));
	w = 0;
	words = ft_count_words(str);
	while (w < words)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		j = 0;
		while (str[i + j] != ' ' && str[i + j] != '\n'
			&& str[i + j] != '\t' && str[i + j] != '\0')
			j++;
		array[w] = malloc(sizeof(char) * (j + 1));
		*(ft_strncpy(array[w], str + i, j) + j) = '\0';
		str = str + i + j;
		w++;
	}
	array[words] = 0;
	return (array);
}
