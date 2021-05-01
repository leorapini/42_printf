/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:54:49 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/30 19:16:02 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

char	*ft_utoa(unsigned int n);
char	*ft_itoh(uintptr_t n, int cap);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *src);
int		ft_putchar(char c);
int		ft_putstr_limit(char *s, int limit);
char	*ft_itoa(int n);
int		get_precision(char *cpypointer, va_list args);
int		get_width(char *cpypointer, va_list args, int *inverted);
int		get_inverted(char *cpypointer);
int		print_pres_d_i_u(int precision, int strlen, int neg, char *num_str);
int		check_neg_val(int num, int *neg, int *width);
int		ft_printf_s(int inverted, int width, int precision, va_list args);
int		ft_printf_c(int inverted, int width, va_list args);
int		ft_printf_d_i(int inverted, int width, int precision, va_list args);
int		ft_printf_u(int inverted, int width, int precision, va_list args);
int		ft_printf_p(int inverted, int width, int precision, va_list args);
int		ft_printf_x(int inverted, int width, int precision, va_list args);
int		ft_printf_xcap(int inverted, int width, int precision, va_list args);
int		ft_printf_per(int inverted, int width, int precision);
int		ft_printf(const char *format, ...);

#endif
