/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:08:25 by plau              #+#    #+#             */
/*   Updated: 2022/11/17 21:56:51 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	partition(int array[], int low, int high)
{
	int	pivot_value;
	int	i;
	int	j;
	int	pivot_index;

	pivot_index = low + (rand() % (high - low));
	if (pivot_index != high)
		swap(&array[pivot_index], &array[high]);
	pivot_value = array[high];
	i = low;
	j = low;
	while (j < high)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
		j++;
	}
	swap(&array[i], &array[high]);
	return (i);
}

/* 0 - first index   				*/
/* high - last index 				*/
void	quicksort_recursion(int array[], int low, int high)
{
	int	pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}

void	quicksort(int array[], int length)
{
	quicksort_recursion(array, 0, length - 1);
}
