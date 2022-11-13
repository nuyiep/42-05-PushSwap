/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:15:38 by plau              #+#    #+#             */
/*   Updated: 2022/11/13 18:57:54 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/srcs/libft.h"
#include <stdio.h>

typedef struct s_stack
{
	int *arr;
	int top;
}	t_stack;

/* quick sort function */
void swap(int *x, int *y);
int partition(int array[], int low, int high);
void quicksort_recursion(int array[], int low, int high);
void quicksort(int array[], int length);

/* Operators */


#endif