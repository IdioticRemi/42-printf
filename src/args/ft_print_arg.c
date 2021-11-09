/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:24:46 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:25:03 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_arg(void *arg_ptr)
{
	t_arg	*arg;

	arg = arg_ptr;
	if (arg->type == 'c')
		write(1, arg->output, 1);
	else
		write(1, arg->output, ft_strlen(arg->output));
}
