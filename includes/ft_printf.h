/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:34:35 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/09 16:40:07 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"

# include <stdarg.h>
# include <stdint.h>

typedef struct s_arg {
	char	type;
	void	*input;
	char	*output;
}	t_arg;

int		ft_printf(const char *input, ...);

// CONVERSION
char	*ft_ctos(int c);
char	*ft_stos(char *s);
char	*ft_ptos(uintptr_t p);
char	*ft_utos(unsigned int u);
char	*ft_xtos(unsigned int x, int maj);

// ARGS
t_arg	*ft_argnew(char type);
t_list	*ft_lst_argnew(char *str);
t_list	*ft_parse_arg(char type, va_list va);
void	ft_parse_args(t_list **args, const char *fmt, va_list va);
void	ft_free_arg(void *arg_ptr);
void	ft_print_arg(void *arg_ptr);
int		ft_get_length(t_list *lst_arg);

#endif
