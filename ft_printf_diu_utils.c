/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_diu_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 18:18:20 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/26 11:58:57 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
