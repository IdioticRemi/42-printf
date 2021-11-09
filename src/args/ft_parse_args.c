/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:27:50 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:28:02 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_args(t_list **args, const char *fmt, va_list va)
{
	size_t	i;
	size_t	l;

	i = -1;
	l = 0;
	while (fmt[++i])
	{
		if (fmt[i] == '%')
		{
			if (!fmt[i + 1] || !ft_strchr("cspdiuxX%", fmt[i + 1]))
				continue ;
			if (i != l)
				ft_lstadd_back(args, ft_lst_argnew(ft_substr(fmt, l, i - l)));
			ft_lstadd_back(args, ft_parse_arg(fmt[i++ + 1], va));
			l = i + 1;
			continue ;
		}
	}
	if (i != l)
		ft_lstadd_back(args, ft_lst_argnew(ft_substr(fmt, l, i - l)));
}
