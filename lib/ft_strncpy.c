/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:05:04 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/14 19:05:28 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
