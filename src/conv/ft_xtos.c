/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:00:17 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 16:43:41 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_nbrlen(unsigned int x)
{
	size_t	len;

	len = 1;
	while (x / 16)
	{
		len++;
		x /= 16;
	}
	return (len);
}

static char	ft_dec_to_hex(int x, int maj)
{
	return ((x > 9) * ('a' + x - 10 - 32 * maj) + (x <= 9) * ('0' + x));
}

char	*ft_xtos(unsigned int x, int maj)
{
	char	*s;
	size_t	i;

	i = ft_nbrlen(x);
	s = ft_calloc(i + 3, sizeof(char));
	if (!s)
		return (0);
	s[i] = '\0';
	while (--i)
	{
		s[i] = ft_dec_to_hex(x % 16, maj);
		x /= 16;
	}
	s[0] = ft_dec_to_hex(x, maj);
	return (s);
}
