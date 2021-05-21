/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xcap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:25:38 by lpinheir          #+#    #+#             */
/*   Updated: 2021/05/01 11:56:09 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_x(int precision, int strlen, unsigned int num, char *hex)
{
	int	l_counter;
	int	orig_precision;

	l_counter = 0;
	orig_precision = precision;
	if (precision > 0)
		while ((precision--) - (strlen) > 0)
			l_counter += ft_putchar('0');
	if (!(num == 0 && orig_precision == 0))
		l_counter += ft_putstr_limit(hex, 0);
	return (l_counter);
}

static int	x_route(int inverted, int precision, int width, unsigned int num)
{
	int		r_counter;
	char	*hex;
	int		strlen;

	r_counter = 0;
	hex = ft_itoh(num, 1);
	strlen = ft_strlen(hex);
	if (num == 0 && precision == 0)
		strlen = 0;
	if (inverted == 1)
		r_counter += print_x(precision, strlen, num, hex);
	if (precision > strlen)
		while ((width--) - (precision) > 0)
			r_counter += ft_putchar(' ');
	else
		while ((width--) - (strlen) > 0)
			r_counter += ft_putchar(' ');
	if (inverted == 0)
		r_counter += print_x(precision, strlen, num, hex);
	free(hex);
	return (r_counter);
}

int	ft_printf_xcap(int inverted, int width, int precision, va_list args)
{
	long int	num;

	num = va_arg(args, unsigned int);
	if (width < 0)
	{
		if (precision >= 0)
			width = -1 * width;
		else
			precision = -1 * width;
	}
	return (x_route(inverted, precision, width, num));
}
