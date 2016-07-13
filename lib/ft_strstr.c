/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 14:32:15 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/12 20:21:59 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	if (str[0] == '\0')
		return (0);
	while (to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
			return (ft_strstr(str + 1, to_find));
		i++;
	}
	return (str);
}
