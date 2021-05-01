/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_diu_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:18:20 by lpinheir          #+#    #+#             */
/*   Updated: 2021/05/01 16:29:12 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pres_d_i_u(int precision, int strlen, int neg, char *num_str)
{
	int	l_counter;

	l_counter = 0;
	if (neg > 0)
		l_counter += ft_putchar('-');
	while ((precision--) - strlen > 0)
		l_counter += ft_putchar('0');
	l_counter += ft_putstr_limit(num_str, 0);
	return (l_counter);
}

int	check_neg_val(int num, int *neg, int *width)
{
	int	t_width;

	t_width = *width;
	if (num < 0)
	{
		num = -1 * num;
		if (num >= 0)
		{
			*neg = 1;
			*width = t_width - 1;
		}
	}
	return (num);
}
