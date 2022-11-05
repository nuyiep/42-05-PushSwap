/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 09:19:45 by plau              #+#    #+#             */
/*   Updated: 2022/07/21 16:25:28 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	trimmed = (char *)(malloc((len + 1) * sizeof(char)));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1, len);
	trimmed[len] = '\0';
	return (trimmed);
}
/*
"0010001001100100"
After strtrim, 
"100010011001"
it only removes the surrounding string
*/