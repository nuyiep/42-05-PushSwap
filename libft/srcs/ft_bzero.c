/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:05:54 by plau              #+#    #+#             */
/*   Updated: 2022/07/05 18:07:36 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return (0);
}

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p;

    p = (unsigned char *)b;
    while (len > 0)
    {
        *p = (unsigned char)c;
        p++;
        len--;
    } 
    return (b);
}
*/
