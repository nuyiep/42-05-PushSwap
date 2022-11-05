/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:25:23 by plau              #+#    #+#             */
/*   Updated: 2022/07/07 12:30:12 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char destination[] = "Destination";
	char source[] = "Source";
	int result = ft_strlcpy(destination, source, 4);
	//strlcpy(destination, source, 4);
	printf("%s\n", destination);
	printf("%d\n", result);
}

strlcpy
	1. need strlen - this is the return value 
	2. copy src to dst
strlcpy copies up to dstsize - 1 characters from src to dst
*/