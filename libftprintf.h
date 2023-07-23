/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:05:09 by lperez-h          #+#    #+#             */
/*   Updated: 2023/07/23 03:02:06 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include	<unistd.h>
# include	<stdarg.h>
# include	<stdlib.h>
# include	"libft.h"

int			ft_printf(const char *format, ...);
int			ft_formatos(va_list args, const char format);
int			ft_print_hexa(unsigned int num, const char format);
int			ft_print_ptr(unsigned long long ptr);
int			ft_print_unsigned(unsigned int n);
int			ft_putchar(char c);
int			ft_printstr(char *str);
int			ft_printnbr(int n);
static int	ft_hex_len(unsigned int n);
void		ft_put_hex(unsigned int num, const char format);
int			ft_ptr_len(unsigned int num);
void		ft_put_ptr(unsigned int num);

#endif