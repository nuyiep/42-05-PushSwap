/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:14:53 by plau              #+#    #+#             */
/*   Updated: 2022/07/19 17:56:42 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %x - print hexa and return length */
int	ft_hexa_len(unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_hexa_upper(unsigned int n)
{
	unsigned int	i;
	char			*str;

	i = n;
	if (n == 0)
		return (write(1, "0", 1));
	else if (i >= 16)
	{
		ft_hexa_upper(i / 16);
		ft_hexa_upper(i % 16);
	}
	else if (i <= 16)
	{
		str = "0123456789ABCDEF";
		write(1, &str[i], 1);
	}
	return (ft_hexa_len(n));
}

int	ft_hexa_lower(unsigned int n)
{
	unsigned int	i;
	char			*str;

	i = n;
	if (n == 0)
		return (write(1, "0", 1));
	else if (i >= 16)
	{
		ft_hexa_lower(i / 16);
		ft_hexa_lower(i % 16);
	}
	else if (i < 16)
	{
		str = "0123456789abcdef";
		write(1, &str[i], 1);
	}
	return (ft_hexa_len(n));
}
