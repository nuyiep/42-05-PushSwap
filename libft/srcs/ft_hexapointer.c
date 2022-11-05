/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexapointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:22:47 by plau              #+#    #+#             */
/*   Updated: 2022/07/19 17:51:51 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %p 
1- print pointer address -
  - address always in hexa form and starts with 0x
2- return length (2 + how many number of digits in hexa form)
counting number of digits by /16
*/
int	ft_hexaptr_len(uintptr_t ptr)
{
	uintptr_t	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}

/* print pointer address
	ptr has to be more than or equal to 16 because 
	str[16] is a null terminating character
*/
void	ft_print_ptr(uintptr_t ptr)
{
	char		*str;

	if (ptr >= 16)
	{
		ft_print_ptr(ptr / 16);
		ft_print_ptr(ptr % 16);
	}
	else if (ptr <= 16)
	{
		str = "0123456789abcdef";
		write(1, &str[ptr], 1);
	}
}

/*	write 0x first
	if 0, return 0x0 
	need a separate function to avoid repeating 0x as we used a recursion function
*/
int	ft_print_n_returnptr(uintptr_t ptr)
{
	uintptr_t	output;

	output = 0;
	if (ptr == 0)
	{
		return (write(1, "0x0", 3));
	}
	output = write(1, "0x", 2) + ft_hexaptr_len(ptr);
	ft_print_ptr(ptr);
	return (output);
}
