/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:34:49 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:29:06 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	const char	*fmt;
	va_list		va;
	t_list		*args;
	int			length;

	length = 0;
	if (!input)
		return (length);
	args = ft_lstnew(0);
	if (!args)
		return (length);
	fmt = ft_strdup((char *) input);
	va_start(va, input);
	ft_parse_args(&args, fmt, va);
	va_end(va);
	ft_lstiter(args->next, &ft_print_arg);
	length = ft_get_length(args->next);
	ft_lstclear(&args, &ft_free_arg);
	free((void *) fmt);
	return (length);
}
