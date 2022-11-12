/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_getter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:25:43 by plau              #+#    #+#             */
/*   Updated: 2022/11/12 19:34:48 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Check whether array is sorted */
int check_if_sorted(int *array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

