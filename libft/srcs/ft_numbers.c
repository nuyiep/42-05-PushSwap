/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:34:55 by plau              #+#    #+#             */
/*   Updated: 2022/07/19 17:58:21 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
%i & %d- need to print number and return length
itoa -> write the integer out
puts -> return string length of int 
free -> used malloc in itoa

int	print_integer_base10(int n)
{
	int	len;
	char *num;

	len = 0;
	num = ft_itoa(n);
	len = ft_puts(num);
	free(num);
	return (len);
}
*/
int	ft_decimal_len(unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	print_integer_base10(int n)
{	
	if (n == 0)
		return (write(1, "0", 1));
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
		return (write(1, "-", 1) + print_integer_base10(n * -1));
	if (n >= 10)
		print_integer_base10(n / 10);
	ft_putchar((n % 10) + '0');
	return (ft_decimal_len(n));
}
