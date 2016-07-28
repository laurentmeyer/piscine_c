/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 09:28:07 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/28 12:56:21 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_print_int(int i)
{
	if (i >= 0 && i <= 9)
		return ('0' + i);
	else if (i >= 10 && i <= 16)
		return ('A' + i - 10);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	if (str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		*ft_decompose(int value, int base)
{
	char	*tab;
	int		i;

	tab = (char *)malloc(33 * sizeof(char));
	if (tab)
	{
		i = 0;
		while (value != 0)
		{
			tab[i] = ft_print_int(value % base);
			value = value / base;
			i++;
		}
		tab[i] = 'G';
	}
	return (tab);
}

char		*ft_reverse_int_tab(char *tab)
{
	int		i;
	int		nbc;
	char	*swap;

	i = 0;
	while (tab[i] != 'G')
		i++;
	nbc = i;
	swap = (char *)malloc(33 * sizeof(char));
	if (swap)
	{
		i = 0;
		while (i < nbc)
		{
			swap[i] = tab[nbc - i - 1];
		//	printf("%c\n", swap[i]);
			i++;
		}
		swap[nbc] = '\0';
	}
	return (swap);
}



char	*ft_itoa_base(int value, int base)
{
	char	*str;

	if (base < 2 || base > 16)
		return ("0");
	if (value == -2147483648 && base == 10)
		return ("-2147483648");
	str = (char *)malloc(33 * sizeof(char));
	if (str)
	{
		if (value < 0)
		{
			if (base != 10)
				return ("0");
			else
			{
				str[0] = '-';
				ft_strcpy(str + 1, ft_itoa_base(-value, base));
				return (str);
			}
		}
		else
			str = (ft_reverse_int_tab(ft_decompose(value, base)));
	}
	return (str);
}
