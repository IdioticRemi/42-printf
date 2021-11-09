/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:20:25 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:20:25 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_stos(char *s)
{
	if (!s)
		return (ft_strdup("(null)"));
	else
		return (ft_strdup(s));
}
