/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:25:38 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/30 19:13:32 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	p_exceptions(int inverted, int width, int precision, int strlen)
{
	int	l_counter;

	l_counter = 0;
	if (precision == 0)
		strlen--;
	if (inverted == 1)
	{	
		l_counter += ft_putstr_limit("0x", 0);
		if (precision != 0)
			l_counter += ft_putchar('0');
	}
	while ((width--) - (strlen + 2) > 0)
		l_counter += ft_putchar(' ');
	if (inverted == 0)
	{
		l_counter += ft_putstr_limit("0x", 0);
		if (precision != 0)
		{
			if (precision > 0)
				while ((precision--) - (strlen) > 0)
					l_counter += ft_putchar('0');
			l_counter += ft_putchar('0');
		}
	}
	return (l_counter);
}

static int	print_p(int inverted, int width, int precision, char *hex)
{
	int	strlen;
	int	l_counter;

	l_counter = 0;
	strlen = ft_strlen(hex);
	if (inverted == 1)
	{	
		l_counter += ft_putstr_limit("0x", 0);
		l_counter += ft_putstr_limit(hex, 0);
	}
	while ((width--) - (strlen + 2) > 0)
		l_counter += ft_putchar(' ');
	if (inverted == 0)
	{
		l_counter += ft_putstr_limit("0x", 0);
		if (precision > 0)
			while ((precision--) - (strlen) > 0)
				l_counter += ft_putchar('0');
		l_counter += ft_putstr_limit(hex, 0);
	}
	free(hex);
	return (l_counter);
}

int	ft_printf_p(int inverted, int width, int precision, va_list args)
{
	long int	num;
	char		*ptr;
	int			p_counter;
	char		*hex;

	p_counter = 0;
	ptr = va_arg(args, void *);
	if (ptr == NULL)
		return (p_exceptions(inverted, width, precision, 1));
	num = (uintptr_t) ptr;
	hex = ft_itoh(num, 0);
	return (print_p(inverted, width, precision, hex));
}
