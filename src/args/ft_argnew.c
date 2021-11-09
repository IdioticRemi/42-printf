/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:29:08 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:29:09 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_arg	*ft_argnew(char type)
{
	t_arg	*new;

	new = ft_calloc(1, sizeof(t_arg));
	if (!new)
		return (0);
	new->input = 0;
	new->output = 0;
	new->type = type;
	return (new);
}
