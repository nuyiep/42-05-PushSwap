/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:31:27 by plau              #+#    #+#             */
/*   Updated: 2022/07/19 17:59:18 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %c- putchar is a built-in function in C 
	alternatively, write(1, &ch, 1), next line return (1)
*/
int	ft_putchar(char ch)
{
	return (write(1, &ch, 1));
}

/* %s - puts is a built-in function in C 
	return how many digits in the int
*/
int	ft_puts(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

/* %% */
int	print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_formats(va_list ap, const char format)
{
	int	output;

	output = 0;
	if (format == 'c')
		output += ft_putchar(va_arg(ap, int));
	else if (format == 's')
		output += ft_puts(va_arg(ap, char *));
	else if (format == 'p')
		output += ft_print_n_returnptr(va_arg(ap, uintptr_t));
	else if (format == 'd' || format == 'i')
		output += print_integer_base10(va_arg(ap, int));
	else if (format == 'u')
		output += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (format == 'x')
		output += ft_hexa_lower(va_arg(ap, unsigned int));
	else if (format == 'X')
		output += ft_hexa_upper(va_arg(ap, unsigned int));
	else if (format == '%')
		output += print_percent();
	return (output);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		output;

	i = 0;
	output = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			output = output + ft_formats(ap, str[i + 1]);
			i++;
		}
		else
			output = output + ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (output);
}
/*
easy version is to loop through the str first. 

int	ft_printf(const char *str)
{
	int i;
	
	i = -1;
	while (str[i++])
		write(1, &str[i], 1);
	return (i);
}

int main(void)
{
	ft_printf("HELLO");
}
*/
