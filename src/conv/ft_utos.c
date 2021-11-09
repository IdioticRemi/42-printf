/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:00:17 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 16:39:36 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_nbrlen(unsigned int u)
{
	size_t	len;

	len = 1;
	while (u / 10)
	{
		len++;
		u /= 10;
	}
	return (len);
}

char	*ft_utos(unsigned int u)
{
	char	*s;
	size_t	i;

	i = ft_nbrlen(u);
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (0);
	s[i] = '\0';
	while (--i)
	{
		s[i] = '0' + u % 10;
		u /= 10;
	}
	s[0] = '0' + u;
	return (s);
}
