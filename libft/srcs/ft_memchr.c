/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:22:42 by plau              #+#    #+#             */
/*   Updated: 2022/07/07 16:24:47 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;

	ptrs = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptrs == (unsigned char)c)
			return ((void *)ptrs);
		ptrs++;
		n--;
	}
	return (0);
}
