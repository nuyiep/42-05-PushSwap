/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortsmall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:26:21 by plau              #+#    #+#             */
/*   Updated: 2022/11/14 18:28:51 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top == 2)
		sort_two(stack_a);
	else if (stack_a->top <= 3)
		sort_three(stack_a);
	else if (stack_a->top <= 5)
		sort_five(stack_a, stack_b);
}

void	sort_two(t_stack *stack_a)
{
	int a;
	int b;

	a = stack_a->arr[0];
	b = stack_a->arr[1];

	if (a > b)
		sa(stack_a);
}

/*
*	Function to sort for a stack of size 3
*
*	1 3 2 	
*		RRA 2 1 3 -->  SA 1 2 3
*	2 1 3
*		SA	1 2 3
*	2 3 1
*		RRA 1 2 3
*	3 1 2
*		RA 1 2 3
*	3 2 1
*		SA 2 3 1 --> RRA 1 2 3 
*	Only stack A, no stack B
*/
void	sort_three(t_stack *stack_a)
{
	int a;
	int b;
	int c;
	
	a = stack_a->arr[0];
	b = stack_a->arr[1];
	c = stack_a->arr[2];
	
	if (a < b && c < b)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (a > b && b < c)
		sa(stack_a);
	else if (a < b && b > c)
		rra(stack_a);
	else if (a > b && b < c)
		ra(stack_a);
	else if (a > b && b > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

/* 8 to 12 instructions */
void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	push_smallest(stack_a, stack_b);
	push_second_smallest(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pb(stack_a, stack_b);
}

void	push_smallest(t_stack *stack_a, t_stack *stack_b)
{
	int smallest;
	int i;

	i = 0;
	while (i < (stack_a->top - 2))
	{
		if (stack_a->arr[i] < stack_a->arr[i + 1])
			smallest = stack_a->arr[i];
		else
			i++;
	}
	i = 0;
	while (i < (stack_a->top - 1))
	{
		if (smallest == stack_a->arr[i])
			return (i);
		else
			i++;
	}
	if (i == 0)
	{
		rra(stack_a);
		pb(stack_a);
	}
	else if (i == 1)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (i == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (i == 3)
	{
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (i == 4)
		pb(stack_a, stack_b);
}

void	push_second_smallest(t_stack *stack_a, t_stack *stack_b)
{
	int second_smallest;
	int i;
	
	i = 0;
	while (i < (stack_a->top - 3))
	{
		if (stack_a->arr[i] < stack_a->arr[i + 1])
			second_smallest = stack_a->arr[i];
		else
			i++;
	}
	if (i == 0)
	{
		rra(stack_a);
		pb(stack_a);
	}
	else if (i == 1)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (i == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (i == 3)
	{
		ra(stack_a);
		pb(stack_a, stack_b);
	}	
}