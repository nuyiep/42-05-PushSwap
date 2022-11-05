/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:03:54 by plau              #+#    #+#             */
/*   Updated: 2022/07/10 17:25:09 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	x;

	x = 0;
	if (n == 0)
		return (0);
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0' && x < n - 1)
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
/*
n - 1 or n - 2- because position, < as per manual- last characteris '\0'

int main(void)
{
	char *s1;
	char *s2;
	int ret;

	s1 = "zyxbcdefgh";
	s2 = "abcdwxyz";
	printf("%d", ft_strncmp(s1, s2, 3));
	//printf("%d", ret);
	return (0);
}
*/
