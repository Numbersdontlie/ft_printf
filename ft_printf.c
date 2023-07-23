/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:23:52 by lperez-h          #+#    #+#             */
/*   Updated: 2023/07/23 23:02:42 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_formatos(const char format, va_list args)
{
	int	i;

	i = 0;
	if (format == '%')
		i = ft_putchar('%');
	else if (format == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (format == 's')
		i = ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		i = ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		i = ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		i = ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		i = ft_print_hexa(va_arg(args, unsigned int), format);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	argo;
	int		i;

	va_start(argo, format);
	i = 0;
	while (*format)
	{
		if (*format == '%' && ft_strchr("cspdiuxX%", *(format + 1)))
		{
			i += ft_formatos(*(format + 1), argo);
			format++;
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(argo);
	return (i);
}
