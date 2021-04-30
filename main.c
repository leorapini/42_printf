/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:11:22 by lpinheir          #+#    #+#             */
/*   Updated: 2021/04/30 15:59:05 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

// create new tests with comparison
int	main(void)
{

	int a;
	int b;

	a = printf("printf  %%0*i     : |%0*i|\n", 7, -54);
	b = ft_printf("ft_printf        : |%0*i|\n", 7, -54);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%*s     : |%*s|\n", -32, "abc");
	b = ft_printf("ft_printf       : |%*s|\n", -32, "abc");
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%*i     : |%*i|\n", -14, 94827);
	b = ft_printf("ft_printf       : |%*i|\n", -14, 94827);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-14i     : |%-14i|\n", 94827);
	b = ft_printf("ft_printf         : |%-14i|\n", 94827);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%0*i     : |%0*i|\n", -7, -54);
	b = ft_printf("ft_printf         : |%0*i|\n", -7, -54);
	printf("a: %d b: %d\n\n", a, b); 


	printf("\n");
	printf("\033[0;35m");
	printf("x\n");
	printf("\033[0m");
	
	a = printf("printf  %%x     : |%x|\n", 1235);
	b = ft_printf("ft_printf      : |%x|\n", 1235);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%05x     : |%05x|\n", 1235);
	b = ft_printf("ft_printf        : |%05x|\n", 1235);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%03x     : |%03x|\n", 0);
	b = ft_printf("ft_printf        : |%03x|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.3x     : |%.3x|\n", 0);
	b = ft_printf("ft_printf        : |%.3x|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%8.5x     : |%8.5x|\n", 34);
	b = ft_printf("ft_printf         : |%8.5x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5.8x     : |%5.8x|\n", 34);
	b = ft_printf("ft_printf         : |%5.8x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	printf("\n");
	printf("\033[0;35m");
	printf("x\n");
	printf("\033[0m");
	
	a = printf("printf  %%x     : |%x|\n", 1235);
	b = ft_printf("ft_printf      : |%x|\n", 1235);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%05x     : |%05x|\n", 1235);
	b = ft_printf("ft_printf        : |%05x|\n", 1235);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%03x     : |%03x|\n", 0);
	b = ft_printf("ft_printf        : |%03x|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.3x     : |%.3x|\n", 0);
	b = ft_printf("ft_printf        : |%.3x|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%8.5x     : |%8.5x|\n", 34);
	b = ft_printf("ft_printf         : |%8.5x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5.8x     : |%5.8x|\n", 34);
	b = ft_printf("ft_printf         : |%5.8x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%05.8x     : |%05.8x|\n", 34);
	b = ft_printf("ft_printf          : |%05.8x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%05.8x     : |%05.8x|\n", 34);
	b = ft_printf("ft_printf          : |%05.8x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%08.x     : |%08.x|\n", 34);
	b = ft_printf("ft_printf         : |%08.x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%8.x     : |%8.x|\n", 34);
	b = ft_printf("ft_printf        : |%8.x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%8.5x     : |%8.5x|\n", 429433);
	b = ft_printf("ft_printf         : |%8.5x|\n", 429433);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5.8x     : |%5.8x|\n", 4294933);
	b = ft_printf("ft_printf         : |%5.8x|\n", 4294933);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5x     : |%-5x|\n", 1235);
	b = ft_printf("ft_printf        : |%-5x|\n", 1235);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-12.5x     : |%-12.5x|\n", 0);
	b = ft_printf("ft_printf           : |%-12.5x|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-3.12x     : |%-3.12x|\n", 34);
	b = ft_printf("ft_printf           : |%-3.12x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5.8x     : |%5.8x|\n", 4294933);
	b = ft_printf("ft_printf         : |%5.8x|\n", 4294933);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5x     : |%-5x|\n", 1235);
	b = ft_printf("ft_printf        : |%-5x|\n", 1235);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%08.5x     : |%08.5x|\n", 0);
	b = ft_printf("ft_printf          : |%08.5x|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%08.5x     : |%08.5x|\n", 34);
	b = ft_printf("ft_printf          : |%08.5x|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%05x     : |%05x|\n", 43);
	b = ft_printf("ft_printf        : |%05x|\n", 43);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%03x     : |%03x|\n", 0);
	b = ft_printf("ft_printf        : |%03x|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 


	printf("\n");
	printf("\033[0;35m");
	printf("PERCENTAGE\n");
	printf("\033[0m");

	
	a = printf("printf  %%     : |%%|\n");
	b = ft_printf("ft_printf     : |%%|\n");
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5     : |%5%|\n");
	b = ft_printf("ft_printf      : |%5%|\n");
	printf("a: %d b: %d\n\n", a, b); 
	a = printf("printf  %%05     : |%05%|\n");
	b = ft_printf("ft_printf       : |%05%|\n");
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-05     : |%-05%|\n");
	b = ft_printf("ft_printf        : |%-05%|\n");
	printf("a: %d b: %d\n\n", a, b); 

	char	*ptr = "abc";
	int	c;

	c = 4;	
	printf("\n");
	printf("\033[0;35m");
	printf("POINTER\n");
	printf("\033[0m");
			

	a = printf("printf  %%30p     : |%30p|\n", ptr);
	b = ft_printf("ft_printf        : |%30p|\n", ptr);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%p     : |%p|\n", &c);
	b = ft_printf("ft_printf      : |%p|\n", &c);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-40p     : |%-40p|\n", &c);
	b = ft_printf("ft_printf         : |%-40p|\n", &c);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5.p     : |%5.p|\n", NULL);
	b = ft_printf("ft_printf        : |%5.p|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5.p     : |%-5.p|\n", NULL);
	b = ft_printf("ft_printf         : |%-5.p|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5.p     : |%5.p|\n", NULL);
	b = ft_printf("ft_printf        : |%5.p|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5p     : |%5p|\n", NULL);
	b = ft_printf("ft_printf       : |%5p|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%2.p     : |%2.p|\n", ptr);
	b = ft_printf("ft_printf        : |%2.p|\n", ptr);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%2p     : |%2p|\n", ptr);
	b = ft_printf("ft_printf       : |%2p|\n", ptr);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%.p     : |%.p|\n", ptr);
	b = ft_printf("ft_printf       : |%.p|\n", ptr);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5u   : |%-5u|\n", 2);
	b = ft_printf("ft_printf      : |%-5u|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5u   : |%-5u|\n", 7);
	b = ft_printf("ft_printf      : |%-5u|\n", 7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5u    : |%5u|\n", 2);
	b = ft_printf("ft_printf      : |%5u|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 
	
	printf("\n");
	printf("\033[0;35m");
	printf("UNSIGNED INT\n");
	printf("\033[0m");
			
	a = printf("printf %%u      : |%u|\n", 2);
	b = ft_printf("ft_printf      : |%u|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%u     : |%u|\n", 7);
	b = ft_printf("ft_printf      : |%u|\n", 7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5u   : |%-5u|\n", 2);
	b = ft_printf("ft_printf      : |%-5u|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5u   : |%-5u|\n", 7);
	b = ft_printf("ft_printf      : |%-5u|\n", 7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5u    : |%5u|\n", 2);
	b = ft_printf("ft_printf      : |%5u|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%5u    : |%5u|\n", -2);
	b = ft_printf("ft_printf      : |%5u|\n", -2);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("%u\n", 4294967295u);
	b = ft_printf("%u\n", 4294967295u);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("%u\n", -14);
	b = ft_printf("%u\n", -14);
	printf("a: %d b: %d\n\n", a, b); 
	
	
	printf("\n");
	printf("\033[0;35m");
	printf("DECIMALS AND INTEGERS\n");
	printf("\033[0m");
		
	a = printf("printf %%12.5d      : |%12.5d|\n", -24);
	b = ft_printf("ft_printf          : |%12.5d|\n", -24);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf %%i      : |%i|\n", 010);
	b = ft_printf("ft_printf      : |%i|\n", 010);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%d     : |%d|\n", -7);
	b = ft_printf("ft_printf      : |%d|\n", -7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5d   : |%-5d|\n", 2);
	b = ft_printf("ft_printf      : |%-5d|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-5d   : |%-5d|\n", -7);
	b = ft_printf("ft_printf      : |%-5d|\n", -7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5d    : |%5d|\n", 2);
	b = ft_printf("ft_printf      : |%5d|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%5d    : |%5d|\n", -7);
	b = ft_printf("ft_printf      : |%5d|\n", -7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%3.5d   : |%3.5d|\n", 2);
	b = ft_printf("ft_printf       : |%3.5d|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%.5d   : |%.5d|\n", -7);
	b = ft_printf("ft_printf      : |%.5d|\n", -7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-.5d  : |%-.5d|\n", 2);
	b = ft_printf("ft_printf      : |%-.5d|\n", 2);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-.5d  : |%-.5d|\n", -7);
	b = ft_printf("ft_printf      : |%-.5d|\n", -7);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%7.13d    : |%7.13d|\n", 12345);
	b = ft_printf("ft_printf         : |%7.13d|\n", 12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%13.7d    : |%13.7d|\n", 12345);
	b = ft_printf("ft_printf         : |%13.7d|\n", 12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-13.7d    : |%-13.7d|\n", 12345);
	b = ft_printf("ft_printf          : |%-13.7d|\n", 12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%13.7d    : |%13.7d|\n", -12345);
	b = ft_printf("ft_printf         : |%13.7d|\n", -12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-13.7d    : |%-13.7d|\n", -12345);
	b = ft_printf("ft_printf          : |%-13.7d|\n", -12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%*d    : |%*d|\n", 13, -12345);
	b = ft_printf("ft_printf      : |%*d|\n", 13, -12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-.*d   : |%-.*d|\n", 3, 1);
	b = ft_printf("ft_printf       : |%-.*d|\n", 3, 1);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%23.7d     : |%23.7d|\n", 233);
	b = ft_printf("ft_printf          : |%23.7d|\n", 233);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-23.7d     : |%-23.7d|\n", 233);
	b = ft_printf("ft_printf           : |%-23.7d|\n", 233);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%*.*d     : |%*.*d|\n", 27, 13, 12345);
	b = ft_printf("ft_printf         : |%*.*d|\n", 27, 13, 12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%*.*d     : |%*.*d|\n", 7, 3, 45);
	b = ft_printf("ft_printf         : |%*.*d|\n", 7, 3, 45);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%10d    : |%10d|\n", -12345);
	b = ft_printf("ft_printf       : |%10d|\n", -12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-.10d   : |%-.10d|\n", -12345);
	b = ft_printf("ft_printf        : |%-.10d|\n", -12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-10.d     : |%-10.d|\n", 777);
	b = ft_printf("ft_printf          : |%-10.d|\n", 777);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%013d    : |%013d|\n", 12345);
	b = ft_printf("ft_printf        : |%013d|\n", 12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%013d   : |%013d|\n", -12345);
	b = ft_printf("ft_printf       : |%013d|\n", -12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%013.2d    : |%013.2d|\n", 12345);
	b = ft_printf("ft_printf          : |%013.2d|\n", 12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%013.2   : |%013.2d|\n", -12345);
	b = ft_printf("ft_printf        : |%013.2d|\n", -12345);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%013.7d    : |%013.7d|\n", 12345);
	b = ft_printf("ft_printf          : |%013.7d|\n", 12345);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%013.7   : |%013.7d|\n", -12345);
	b = ft_printf("ft_printf        : |%013.7d|\n", -12345);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%05d     : |%05d|\n", 43);
	b = ft_printf("ft_printf        : |%05d|\n", 43);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.5d     : |%.5d|\n", 43);
	b = ft_printf("ft_printf        : |%.5d|\n", 43);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%07d     : |%07d|\n", -54);
	b = ft_printf("ft_printf        : |%07d|\n", -54);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.7d     : |%.7d|\n", -54);
	b = ft_printf("ft_printf        : |%.7d|\n", -54);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.07d     : |%.07d|\n", -54);
	b = ft_printf("ft_printf         : |%.07d|\n", -54);
	printf("a: %d b: %d\n\n", a, b); 
		
	a = printf("printf  %%03d    : |%03d|\n", 0);
	b = ft_printf("ft_printf       : |%03d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%3d    : |%3d|\n", 0);
	b = ft_printf("ft_printf      : |%3d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-3d    : |%-3d|\n", 0);
	b = ft_printf("ft_printf       : |%-3d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%d    : |%d|\n", 0);
	b = ft_printf("ft_printf     : |%d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-.0d    : |%-.0d|\n", 0);
	b = ft_printf("ft_printf        : |%-.0d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-.d    : |%-.d|\n", 0);
	b = ft_printf("ft_printf       : |%-.d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-5.0d    : |%-5.0d|\n", 0);
	b = ft_printf("ft_printf         : |%-5.0d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-5.d    : |%-5.d|\n", 0);
	b = ft_printf("ft_printf        : |%-5.d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.0d    : |%.0d|\n", 0);
	b = ft_printf("ft_printf       : |%.0d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.d    : |%.d|\n", 0);
	b = ft_printf("ft_printf      : |%.d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%5.0d    : |%5.0d|\n", 0);
	b = ft_printf("ft_printf        : |%5.0d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%5.d    : |%5.d|\n", 0);
	b = ft_printf("ft_printf       : |%5.d|\n", 0);
	printf("a: %d b: %d\n\n", a, b); 
		
	a = printf("printf  %%.0d    : |%.0d|\n", 3);
	b = ft_printf("ft_printf       : |%.0d|\n", 3);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.d    : |%.d|\n", 3);
	b = ft_printf("ft_printf      : |%.d|\n", 3);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%5.0d    : |%5.0d|\n", 3);
	b = ft_printf("ft_printf        : |%5.0d|\n", 3);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%5.d    : |%5.d|\n", 3);
	b = ft_printf("ft_printf       : |%5.d|\n", 3);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%08.5i    : |%08.5i|\n", 34);
	b = ft_printf("ft_printf         : |%08.5i|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%05i    : |%05i|\n", 34);
	b = ft_printf("ft_printf       : |%05i|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%0i    : |%0i|\n", 34);
	b = ft_printf("ft_printf      : |%0i|\n", 34);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%0*.d    : |%0*.d|\n", 0, 3);
	b = ft_printf("ft_printf        : |%0*.d|\n", 0,  3);
	printf("a: %d b: %d\n\n", a, b); 


	printf("\n");
	printf("\n");
	printf("\033[0;35m");
	printf("STRINGS and CHARS\n");
	printf("\033[0m");
	
	a = printf("printf  %%c     : |%c|\n", 'z');
	b = ft_printf("ft_printf      : |%c|\n", 'z');
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%13c    : |%13c|\n", 'z');
	b = ft_printf("ft_printf       : |%13c|\n", 'z');
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-13c   : |%-13c|\n", 'z');
	b = ft_printf("ft_printf       : |%-13c|\n", 'z');
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-5c   : |%-5c|\n", 'z');
	b = ft_printf("ft_printf      : |%-5c|\n", 'z');
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%5c    : |%5c|\n", 'z');
	b = ft_printf("ft_printf      : |%5c|\n", 'z');
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf %%s      : |%s|\n", "abcdef");
	b = ft_printf("ft_printf      : |%s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%5s    : |%5s|\n", "abcdef");
	b = ft_printf("ft_printf      : |%5s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-5s   : |%-5s|\n", "abcdef");
	b = ft_printf("ft_printf      : |%-5s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%15s    : |%15s|\n", "abcdef");
	b = ft_printf("ft_printf       : |%15s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-15s   : |%-15s|\n", "abcdef");
	b = ft_printf("ft_printf       : |%-15s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%.3s   : |%.3s|\n", "abcdef");
	b = ft_printf("ft_printf      : |%.3s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-.3s  : |%-.3s|\n", "abcdef");
	b = ft_printf("ft_printf      : |%-.3s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%3s    : |%3s|\n", "abcdef");
	b = ft_printf("ft_printf      : |%3s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%3.8s   : |%3.8s|\n", "ab");
	b = ft_printf("ft_printf       : |%3.8s|\n", "ab");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-3.8s   : |%-3.8s|\n", "ab");
	b = ft_printf("ft_printf        : |%-3.8s|\n", "ab");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%8.3s    : |%8.3s|\n", "ab");
	b = ft_printf("ft_printf        : |%8.3s|\n", "ab");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-8.3s   : |%-8.3s|\n", "ab");
	b = ft_printf("ft_printf        : |%-8.3s|\n", "ab");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%3.8s   : |%3.8s|\n", "abcdef");
	b = ft_printf("ft_printf       : |%3.8s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-3.8s   : |%-3.8s|\n", "abcdef");
	b = ft_printf("ft_printf        : |%-3.8s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%8.3s    : |%8.3s|\n", "abcdef");
	b = ft_printf("ft_printf        : |%8.3s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-8.3s   : |%-8.3s|\n", "abcdef");
	b = ft_printf("ft_printf        : |%-8.3s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%-3.8s   : |%-3.8s|\n", "abcdef");
	b = ft_printf("ft_printf        : |%-3.8s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%8.3s    : |%8.3s|\n", "abcdef");
	b = ft_printf("ft_printf        : |%8.3s|\n", "abcdef");
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%s   : |%s|\n", NULL);
	b = ft_printf("ft_printf    : |%s|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%12s   : |%12s|\n", NULL);
	b = ft_printf("ft_printf      : |%12s|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%12.3s   : |%12.3s|\n", NULL);
	b = ft_printf("ft_printf        : |%12.3s|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 
	
	a = printf("printf  %%12.s   : |%12.s|\n", NULL);
	b = ft_printf("ft_printf       : |%12.s|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%.s   : |%.s|\n", NULL);
	b = ft_printf("ft_printf     : |%.s|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%.s   : |%.s|\n", NULL);
	b = ft_printf("ft_printf     : |%.s|\n", NULL);
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%.0s   : |%.0s|\n", "hello");
	b = ft_printf("ft_printf      : |%.0s|\n", "hello");
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%10.0s   : |%10.0s|\n", "hello");
	b = ft_printf("ft_printf        : |%10.0s|\n", "hello");
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%-3.s   : |%-3.s|\n", "hello");
	b = ft_printf("ft_printf       : |%-3.s|\n", "hello");
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%3.s   : |%3.s|\n", "hello");
	b = ft_printf("ft_printf      : |%3.s|\n", "hello");
	printf("a: %d b: %d\n\n", a, b); 

	a = printf("printf  %%9s   : |%9s|\n", "hello");
	b = ft_printf("ft_printf     : |%9s|\n", "hello");
	printf("a: %d b: %d\n\n", a, b); 

	return (0);
}
