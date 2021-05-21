/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:10:59 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/29 15:18:47 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(int inverted, int width, va_list args)
{
	int	c_counter;

	c_counter = 0;
	if (inverted == 1)
		c_counter += ft_putchar(va_arg(args, int));
	while ((width--) - 1 > 0)
		c_counter += ft_putchar(' ');
	if (inverted == 0)
		c_counter += ft_putchar(va_arg(args, int));
	return (c_counter);
}
