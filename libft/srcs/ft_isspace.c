/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:45:18 by plau              #+#    #+#             */
/*   Updated: 2022/11/09 15:54:44 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		||	c == '\f' || c== '\r' || c == ' ')
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("%d\n", ft_isspace('o'));
// }