/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:16:57 by plau              #+#    #+#             */
/*   Updated: 2022/07/10 19:45:49 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		if (res * sign > 2147483647)
			return (-1);
		if (res * sign < -2147483648)
			return (0);
		i++;
	}
	return (res * sign);
}
/*
#include <stdlib.h>
#include <stdio.h> 

int main()
{
	printf("%d\n", ft_atoi("-12312"));
	printf("%d\n", ft_atoi("--wada+-12312"));
	printf("%d\n", ft_atoi("wadawd-12312"));
	printf("%d\n", ft_atoi("-12awdawd312"));
	printf("%d\n", ft_atoi("-+++12312"));
	printf("%d\n", ft_atoi("--12312"));
	printf("%d\n", ft_atoi("   --+-12312"));
}

atoi - convert ascii string to integer 
2 while loops 
    1. non-digits 
        if non-digits- if - or +, sign * -1 or 1
    2. digits 
        (temp * 10) + first number - '0' convert to integer
*/
