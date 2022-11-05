/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:43:09 by plau              #+#    #+#             */
/*   Updated: 2022/07/09 19:28:55 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long nb)
{
	int	res;

	if (nb == 0)
		return (1);
	res = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		res = res + 1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		res = res + 1;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nb;

	len = intlen(n);
	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len--] = '\0';
	if (!nb)
		res[len] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb != 0)
	{
		res[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}
/*
first function
	- if nb < 0, allocate one space for it
*/
