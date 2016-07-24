/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 10:09:17 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 09:22:48 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"

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
