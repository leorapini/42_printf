/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:10:40 by lpinheir          #+#    #+#             */
/*   Updated: 2021/05/01 16:38:33 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	print_wd_pr_num(int inverted, int width, int precision, int num)
{
	int		l_counter;
	int		strlen;
	char	*num_str;
	int		neg;

	l_counter = 0;
	neg = 0;
	num = check_neg_val(num, &neg, &width);
	num_str = ft_itoa(num);
	strlen = ft_strlen(num_str);
	if (strlen > precision)
		precision = strlen;
	if (inverted == 1)
		l_counter += print_pres_d_i_u(precision, strlen, neg, num_str);
	while ((width--) - precision > 0)
		l_counter += ft_putchar(' ');
	if (inverted == 0)
		l_counter += print_pres_d_i_u(precision, strlen, neg, num_str);
	free(num_str);
	return (l_counter);
}

static int	print_pres_num(int precision, int strlen, int num)
{	
	int		l_counter;
	char	*num_str;

	l_counter = 0;
	if (num >= 0)
	{
		num_str = ft_itoa(num);
		while ((precision--) - strlen > 0)
			l_counter += ft_putchar('0');
		l_counter += ft_putstr_limit(num_str, 0);
	}
	else
	{
		num = -1 * num;
		num_str = ft_itoa(num);
		if (num >= 0)
			l_counter += ft_putchar('-');
		while ((precision--) - (strlen - 1) > 0)
			l_counter += ft_putchar('0');
		l_counter += ft_putstr_limit(num_str, 0);
	}
	free(num_str);
	return (l_counter);
}

static int	print_wdth_num(int inverted, int width, char *num_str)
{
	int	l_counter;
	int	strlen;

	l_counter = 0;
	strlen = ft_strlen(num_str);
	if (inverted == 1)
		l_counter += ft_putstr_limit(num_str, 0);
	while ((width--) - strlen > 0)
		l_counter += ft_putchar(' ');
	if (inverted == 0)
		l_counter += ft_putstr_limit(num_str, 0);
	return (l_counter);
}

static int	d_i_route(int inverted, int width, int precision, int num)
{
	int		counter;
	int		strlen;
	char	*num_str;

	counter = 0;
	num_str = ft_itoa(num);
	strlen = ft_strlen(num_str);
	if (precision > 0)
	{
		if (precision >= width)
			counter += print_pres_num(precision, strlen, num);
		else if (precision < width)
			counter += print_wd_pr_num(inverted, width, precision, num);
	}
	else
		counter += print_wdth_num(inverted, width, num_str);
	free(num_str);
	return (counter);
}

int	ft_printf_d_i(int inverted, int width, int precision, va_list args)
{
	int	num;
	int	counter;

	num = va_arg(args, int);
	counter = 0;
	if (precision == 0 && num == 0 && width != 0)
	{
		if (width < 0)
			width = -1 * width;
		while ((width--) > 0)
			counter += ft_putchar(' ');
		return (counter);
	}
	else if (precision == 0 && num == 0 && width == 0)
		return (0);
	if (width < 0)
	{
		if (precision >= 0)
			width = width * -1;
		else if (precision < 0 && num < 0)
			precision = (width * -1) - 1;
		else if (precision < 0 && num >= 0)
			precision = width * -1;
	}
	return (d_i_route(inverted, width, precision, num));
}
