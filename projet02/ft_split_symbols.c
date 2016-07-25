/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_symbols.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 09:44:50 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/24 23:39:42 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_project.h"

char	*ft_remove_whitespaces(char *str)
{
	char	*result;
	int		i;
	int		j;

	result = (char *)malloc(ft_strlen(str) * sizeof(char));
	if (result)
	{
		i = 0;
		j = 0;
		while (str[i] != '\0')
		{
			if (str[i] == ' ')
				i++;
			else
			{
				result[j] = str[i];
				i++;
				j++;
			}
		}
		result[j] = '\0';
	}
	return (result);
}

int		ft_next_operator(char *s)
{
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	if (s[i] > '9' || s[i] < '0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '+' || s[i] == '-' || s[i] == '/'
			|| s[i] == '*' || s[i] == '%')
			return (i);
		i++;
	}
	return (0);
}

int		ft_count_operators(char *s)
{
	if (ft_next_operator(s) == 0)
		return (0);
	else
		return (1 + ft_count_operators(s + ft_next_operator(s) + 1));
}

char	*ft_extract_symbols(char *str)
{
	char	*s;
	int		t;
	char	**res;
	int		i;

	s = ft_remove_whitespaces(str);
	t = ft_count_operators(s);
	res = (char *)malloc((t + 1) * sizeof(char));
	if (res)
	{
		i = 0;
		while (i < t)
		{
			res[i] = s[ft_next_operator(s)];
			s = s + ft_next_operator(s);
			i++;
		}
		res[i] = 0;
	}
	return (res);
}


char	*ft_extract_ints(char str)
{
	char	*s;
	int		t;
	char	**res;
	int		i;

	s = ft_remove_whitespaces(str);
	t = ft_count_operators(s);
	res = (char *)malloc((t + 1) * sizeof(char));
	if (res)
	{
		i = 0;
		while (i < t)
		{
			res[i] = s[ft_next_operator(s)];
			s = s + ft_next_operator(s);
			i++;
		}
		res[i] = 0;
	}
	return (res);
}




char	***ft_split_symbols(char *string)
{
	char	**result;
	int		elements;
	int		i;
	char	*str;

	str = ft_remove_whitespaces(string);
	elements = 2 * ft_count_operators(str);
	result = (char **)malloc((elements + 2) * sizeof(char *));
	if (result)
	{
		i = 0;
		while (i < elements)
		{
			result[i] = ft_strndup(str, ft_next_operator(str));
			str = str + ft_next_operator(str);
			i++;
			result[i] = ft_strndup(str, 1);
			i++;
			str++;
		}
		result[i] = str;
		result[elements + 1] = 0;
	}
	return (result);
}
