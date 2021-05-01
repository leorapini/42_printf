/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:09:51 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/30 18:27:44 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_s(int inverted, int width, int precision, char *str)
{
	int	l_counter;
	int	strlen;

	l_counter = 0;
	strlen = ft_strlen(str);
	if (precision > 0 && precision < strlen)
		strlen = precision;
	if (inverted == 1)
		l_counter += ft_putstr_limit(str, precision);
	if (width < 0 && inverted == 0)
	{
		width = -1 * width;
		while ((width--) - strlen > 0)
			l_counter += ft_putchar('0');
	}
	else
	{
		if (width < 0)
			width = -1 * width;
		while ((width--) - strlen > 0)
			l_counter += ft_putchar(' ');
	}
	if (inverted == 0)
		l_counter += ft_putstr_limit(str, precision);
	return (l_counter);
}

int	ft_printf_s(int inverted, int width, int precision, va_list args)
{
	char	*str;
	int		s_counter;

	s_counter = 0;
	str = va_arg(args, char *);
	if (str == 0 && precision != 0)
	{
		str = ft_strdup("(null)");
		s_counter += print_s(inverted, width, precision, str);
		free(str);
		return (s_counter);
	}
	if (precision == 0)
	{
		str = ft_strdup("");
		s_counter += print_s(inverted, width, precision, str);
		free(str);
		return (s_counter);
	}
	return (print_s(inverted, width, precision, str));
}
