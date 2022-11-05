/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:52:56 by plau              #+#    #+#             */
/*   Updated: 2022/07/10 18:02:02 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr_ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr_ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr_ptr)
		return (NULL);
	ft_memcpy(substr_ptr, s + start, len);
	substr_ptr[len] = '\0';
	return (substr_ptr);
}
/*
return ft_strdup to return empty string. 
*/