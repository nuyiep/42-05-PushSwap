/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:14:23 by plau              #+#    #+#             */
/*   Updated: 2022/09/05 18:53:38 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h" 
# include <stdarg.h>   //variadic function
# include <unistd.h>  //write
# include <stdlib.h> //malloc

int		print_integer_base10(int n); //%d, %i
int		ft_decimal_len(unsigned int n);

int		ft_putchar(char ch); //%c
int		ft_puts(const char *s); //%s 
int		print_percent(void); //%

//%u
int		ft_unsigned_len(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_print_unsigned(unsigned int n);

//%x %X
int		ft_hexa_len(unsigned int n);
int		ft_hexa_lower(unsigned int n);
int		ft_hexa_upper(unsigned int n);

//%p
int		ft_hexaptr_len(uintptr_t ptr);
void	ft_print_ptr(uintptr_t ptr);
int		ft_print_n_returnptr(uintptr_t ptr);

int		ft_formats(va_list args, const char format);
int		ft_printf(const char *str, ...);

#endif
