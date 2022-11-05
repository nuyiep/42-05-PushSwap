/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:44:43 by plau              #+#    #+#             */
/*   Updated: 2022/07/10 17:52:29 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*output;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	output = malloc(count * size);
	if (!output)
		return (0);
	ft_bzero(output, count * size);
	return (output);
}
