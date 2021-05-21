/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_per.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 15:08:57 by lpinheir          #+#    #+#             */
/*   Updated: 2021/05/01 13:20:46 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_per(int inverted, int width, int precision)
{
	int	per_counter;

	precision = 0;
	per_counter = 0;
	if (inverted == 1)
		per_counter += ft_putchar('%');
	if (width < 0)
	{
		width = -1 * width;
		if (inverted == 1)
			while ((width--) - 1 > 0)
				per_counter += ft_putchar(' ');
		else
			while ((width--) - 1 > 0)
				per_counter += ft_putchar('0');
	}
	else
		while ((width--) - 1 > 0)
			per_counter += ft_putchar(' ');
	if (inverted == 0)
		per_counter += ft_putchar('%');
	return (per_counter);
}
