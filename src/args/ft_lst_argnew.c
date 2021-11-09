/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_argnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:28:47 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 15:28:48 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*ft_lst_argnew(char *str)
{
	t_arg	*new;

	new = ft_argnew('s');
	if (!new)
		return (0);
	new->output = str;
	return (ft_lstnew(new));
}
