/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:03:42 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/30 18:04:10 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_limit(char *s, int limit)
{
	int	counter;

	counter = 0;
	if (s)
	{
		if (limit > 0)
		{
			while (*s != 0 && limit > 0)
			{
				counter += ft_putchar(*s);
				s++;
				limit--;
			}
		}
		else
		{
			while (*s != 0)
			{
				counter += ft_putchar(*s);
				s++;
			}
		}
	}
	return (counter);
}
