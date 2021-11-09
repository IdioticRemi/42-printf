/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:00:17 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 16:34:03 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_nbrlen(uintptr_t p)
{
	size_t	len;

	len = 1;
	while (p / 16)
	{
		len++;
		p /= 16;
	}
	return (len);
}

static char	ft_dec_to_hex(int x)
{
	return ((x > 9) * ('a' + x - 10) + (x <= 9) * ('0' + x));
}

char	*ft_ptos(uintptr_t p)
{
	char	*s;
	size_t	i;

	if (!p)
		return (ft_strdup("(nil)"));
	i = ft_nbrlen(p);
	s = ft_calloc(i + 3, sizeof(char));
	if (!s)
		return (0);
	s[0] = '0';
	s[1] = 'x';
	s[i + 2] = '\0';
	while (--i)
	{
		s[2 + i] = ft_dec_to_hex(p % 16);
		p /= 16;
	}
	s[2] = ft_dec_to_hex(p);
	return (s);
}
