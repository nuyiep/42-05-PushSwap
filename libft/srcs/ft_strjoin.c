/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:42:28 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 18:59:01 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	output = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (output == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		output[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		output[j++] = s2[i++];
	output[j] = '\0';
	return (output);
}
