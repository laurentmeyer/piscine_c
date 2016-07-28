/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 19:21:41 by lmeyer            #+#    #+#             */
/*   Updated: 2016/07/28 19:34:14 by lmeyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
	return (octet / 16 + 16 * (octet % 16));
}

int main(void)
{
	return (reverse_bits(3));
}
