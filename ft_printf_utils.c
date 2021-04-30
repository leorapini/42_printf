/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 23:34:42 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/28 17:48:04 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	get_inverted(char *cpypointer)
{
	while (!(ft_isalpha(*cpypointer)) && *cpypointer != '\0')
	{
		if (*cpypointer == '-')
			return (1);
		else if (*cpypointer == '%')
			break ;
		cpypointer++;
	}
	return (0);
}

static int	get_num_n_zero(va_list args, int **inverted)
{
	int	num;

	num = va_arg(args, int);
	if (num < 0)
	{
		**inverted = 1;
		return (-1 * num);
	}
	return (num);
}

static int	get_num_zero(va_list args, int **inverted)
{
	int	num;

	num = va_arg(args, int);
	if (num < 0)
		**inverted = 1;
	return (-1 * num);
}

int	get_width(char *cpypointer, va_list args, int *inverted)
{
	while (!(ft_isalpha(*cpypointer)) && *cpypointer != '\0')
	{
		if (*cpypointer == '*')
			return (get_num_n_zero(args, &inverted));
		else if (ft_isdigit(*cpypointer))
		{
			if (*cpypointer == '0')
			{
				cpypointer++;
				if (*cpypointer == '*')
					return (get_num_zero(args, &inverted));
				else if (ft_isdigit(*cpypointer))
					return (-1 * ft_atoi(cpypointer));
				cpypointer--;
			}
			else
				return (ft_atoi(cpypointer));
		}
		else if (*cpypointer == '.' || *cpypointer == '%')
			break ;
		cpypointer++;
	}
	return (0);
}

int	get_precision(char *cpypointer, va_list args)
{
	int	control;

	control = -1;
	while (!(ft_isalpha(*cpypointer)) && *cpypointer != '\0')
	{
		if (*cpypointer == '.')
			control = 0;
		else if (*cpypointer == '*' && control == 0)
			return (va_arg(args, int));
		else if (ft_isdigit(*cpypointer) && control == 0)
			return (ft_atoi(cpypointer));
		else if (*cpypointer == '%')
			break ;
		cpypointer++;
	}
	return (control);
}
