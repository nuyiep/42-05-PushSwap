/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:31:24 by plau              #+#    #+#             */
/*   Updated: 2022/07/10 17:09:15 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h> //tolower
int main()
{
    //int t = ft_tolower(67); // ascii 99 is c, 67 is C
    int t = tolower(67);
    printf("%d\n", t);
}
*/
