/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:25:46 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:25:54 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_free_arg(void *arg_ptr)
{
	t_arg	*arg;

	arg = arg_ptr;
	if (!arg)
		return ;
	if (arg->input)
		free(arg->input);
	if (arg->output)
		free((void *) arg->output);
	free(arg);
}
