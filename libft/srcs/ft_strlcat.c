/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:12:02 by plau              #+#    #+#             */
/*   Updated: 2022/07/07 15:11:24 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] && d < size)
		d++;
	while ((src[s]) && ((d + s + 1) < size))
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d != size)
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size) 
		j++;
	while ((src[k]) && ((j + k + 1) < size)) 
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
*/