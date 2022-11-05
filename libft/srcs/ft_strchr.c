/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:35:30 by plau              #+#    #+#             */
/*   Updated: 2022/07/10 17:14:48 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main()
{
	char str[] = "http://www.tutorialspoint.com";
	char ch = '.';
	char *ret;

	ret = ft_strchr(str, '.');
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/
