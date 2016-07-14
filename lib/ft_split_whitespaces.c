/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:18:19 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 21:34:29 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		w;
	int		i;
	int		j;
	int		words;

	array = (char **)malloc(ft_count_words(str) * sizeof(char*));
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
		array[w] = malloc(j + 1);
		ft_strncpy(array[w], str + i, j);
		array[w][j + 1] = '\0';
		str = str + i + j;
		w++;
	}
	return (array);
}
