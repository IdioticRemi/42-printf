/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:19:30 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:19:45 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ctos(int c)
{
	char	*s;

	s = ft_calloc(2, sizeof(char));
	if (!s)
		return (0);
	s[0] = (char) c;
	s[1] = '\0';
	return (s);
}
