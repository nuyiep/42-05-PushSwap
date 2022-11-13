/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:00:13 by plau              #+#    #+#             */
/*   Updated: 2022/11/13 20:47:33 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	if (stack_a->top < 1)
		return ;
	swap(&(stack_a->arr[stack_a->top]), &(stack_a->arr[stack_a->top - 1]));
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *stack_b)
{
	if (stack_b->top < 1)
		return ;
	swap((&stack_b->arr[stack_b->top]), &(stack_b->arr[stack_b->top - 1]));
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_putstr_fd("ss\n", 1);
}

/* Take the first element at the top of b and put it at the top of a */
void	pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->top == -1)
		return ;
	stack_a->top++; //create new index
	stack_a->arr[stack_a->top] = stack_b->arr[stack_b->top]; // b put in a
	stack_b->arr[stack_b->top] = 0; // why need this line - content zero??
	stack_b->top--; //decrement index
	ft_putstr_fd("pa\n", 1);
}

/* Take the first element at the top of a and put it at the top of b.*/
void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top == -1)
		return ;
	stack_b->top++;
	stack_b->arr[stack_b->top] = stack_a->arr[stack_a->top]; //content 
	stack_a->arr[stack_a->top] = 0;
	stack_a->top--;
	ft_putstr_fd("pb\n", 1);
}
