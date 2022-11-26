/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_quicksort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:08:25 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 19:17:41 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* return value is the pivot 												
	6 3 7 5 1 2 [4] 															
	4 is the pivot value because it is the last index in the array (int high) 	
	j and i will be set to low (first index) 									
	j will get incremented in every loop 										
	i will only get incremented if array[j] is less than pivot_value 		
	j 			   															
	6 3 7 5 1 2 [4] 															
	i 			   															
	   j 			   															
	6 3 7 5 1 2 [4] 															
	i 			   															
	   j 			   															
	3 6 7 5 1 2 [4] 															
	   i 			   															
	              j  															
	3 1 2 5 6 7 [4] 															
	       i 		   															
	              j  															
	3 1 2 [4] 6 7 5 															
	        i		   															
	return 4 	   															
	can optimise the algorithm by choosing a random value between low and high
	rather than choosing the last index value*/
int	partition(int array[], int low, int high)
{
	int	pivot_value;
	int	i;
	int	j;

	pivot_value = array[high];
	i = low;
	j = low;
	while (j < high)
	{
		if (array[j] <= pivot_value)
		{
			ft_swap(&array[i], &array[j]);
			i++;
		}
		j++;
	}
	ft_swap(&array[i], &array[high]);
	return (i);
}

/* 0 - first index   				*/
/* high - last index 				*/
/* 6 3 7 5 1 2 [4] 					*/
/*              |	    			*/
/*		3 1 [2] 4 6 7 [5]			*/
/*			 |		   |			*/
/*		   1 2 3       5 7 [6] 		*/
/*							|		*/
/*							6 7		*/
/* When calling the function, only need to insert array and length
	quicksort_recursion(array, low, pivot_index - 1)->left side of the array
	if (low < high) - to stop the function */
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

/* Main function for quicksort algorithm */
void	quicksort(int array[], int length)
{
	quicksort_recursion(array, 0, length - 1);
}
