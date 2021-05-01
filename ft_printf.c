/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:29:48 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/30 19:37:14 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	router(char *pointer, int *flag, va_list args)
{
	if (*pointer == '%')
		return (ft_printf_per(flag[0], flag[1], flag[2]));
	else if (*pointer == 's')
		return (ft_printf_s(flag[0], flag[1], flag[2], args));
	else if (*pointer == 'c')
		return (ft_printf_c(flag[0], flag[1], args));
	else if (*pointer == 'd' || *pointer == 'i')
		return (ft_printf_d_i(flag[0], flag[1], flag[2], args));
	else if (*pointer == 'u')
		return (ft_printf_u(flag[0], flag[1], flag[2], args));
	else if (*pointer == 'p')
		return (ft_printf_p(flag[0], flag[1], flag[2], args));
	else if (*pointer == 'x')
		return (ft_printf_x(flag[0], flag[1], flag[2], args));
	else if (*pointer == 'X')
		return (ft_printf_xcap(flag[0], flag[1], flag[2], args));
	return (0);
}

static int	decode(char *pointer, va_list args)
{
	int	inverted;
	int	width;
	int	precision;
	int	flag[3];

	pointer++;
	inverted = get_inverted(pointer);
	width = get_width(pointer, args, &inverted);
	precision = get_precision(pointer, args);
	flag[0] = inverted;
	flag[1] = width;
	flag[2] = precision;
	while (!(ft_isalpha(*pointer)) && *pointer != '\0' && *pointer != '%')
		pointer++;
	return (router(pointer, flag, args));
}

static char	*move_ptr_esc_per(char	*pointer)
{
	while (!(ft_isalpha(*pointer)))
	{
		pointer++;
		if (*pointer == '%')
			break ;
	}
	pointer++;
	return (pointer);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*pointer;
	int		counter;

	va_start(args, format);
	pointer = (char *) format;
	counter = 0;
	while (*pointer)
	{
		while (*pointer != '%' && *pointer != '\0')
		{
			ft_putchar(*pointer);
			pointer++;
			counter++;
		}
		if (*pointer == '%')
		{
			counter += decode(pointer, args);
			pointer = move_ptr_esc_per(pointer);
		}
	}
	va_end(args);
	return (counter);
}
