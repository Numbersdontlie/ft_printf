/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 01:46:10 by lperez-h          #+#    #+#             */
/*   Updated: 2023/07/23 02:56:52 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_unsigned(unsigned int n)
{
	static int		j;
	unsigned int	i;

	i = n;
	if (!j)
		j = 0;
	if (i > 9)
		ft_unsigned(i / 10);
	ft_putchar((i % 10) + '0', 1);
	j++;
	if (n == 0)
		return (1);
	return (j);
}
