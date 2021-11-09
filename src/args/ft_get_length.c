/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:24:12 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:24:25 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_length(t_list *lst_arg)
{
	int		length;
	t_arg	*arg;

	length = 0;
	while (lst_arg)
	{
		arg = (t_arg *) lst_arg->content;
		if (arg->output && arg->type != 'c')
			length += ft_strlen(arg->output);
		if (arg->type == 'c')
			length += 1;
		lst_arg = lst_arg->next;
	}
	return (length);
}
