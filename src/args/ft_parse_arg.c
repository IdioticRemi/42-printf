/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:28:19 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 16:41:36 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*ft_parse_arg(char type, va_list va)
{
	t_arg	*arg;

	arg = ft_argnew(type);
	if (type == '%')
		arg->output = ft_strdup("%");
	else if (type == 'c')
		arg->output = ft_ctos(va_arg(va, int));
	else if (type == 's')
		arg->output = ft_stos(va_arg(va, char *));
	else if (type == 'i' || type == 'd')
		arg->output = ft_itoa(va_arg(va, int));
	else if (type == 'p')
		arg->output = ft_ptos(va_arg(va, uintptr_t));
	else if (type == 'u')
		arg->output = ft_utos(va_arg(va, unsigned int));
	else if (type == 'x' || type == 'X')
		arg->output = ft_xtos(va_arg(va, unsigned int), type == 'X');
	else
		(void) va_arg(va, int);
	return (ft_lstnew(arg));
}
