/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:08:03 by plau              #+#    #+#             */
/*   Updated: 2022/07/19 17:59:54 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %u Prints an unsigned decimal (base 10) number
	same as ft_itoa just remove the negative number parts 
*/
int	ft_unsigned_len(unsigned int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_unsigned_len(n);
	if (n == 0)
		return (ft_strdup("0"));
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		print_length = 1;
	}
	else
	{
		num = ft_uitoa(n);
		print_length = ft_puts(num);
		free(num);
	}
	return (print_length);
}
/*
Another expression for
		write(1, "0", 1);
		print_length = 1;
is 
	print_length = write(1, "0", 1);


	print_length = print_length + ft_puts(num);
	
	ft_puts return strength length and print number
*/