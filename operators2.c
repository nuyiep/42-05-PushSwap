/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:22:30 by plau              #+#    #+#             */
/*   Updated: 2022/11/13 21:01:15 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack_a)
{
	stack_a->top++;
	while (stack_a->arr[stack_a->top - 1] != NULL)
	{
		swap(&(stack_a->arr[stack_a->top]), stack_a->arr[stack_a->top - 1]);
		stack_a->top--;
	}
	ft_putstr_fd("ra\n", 1);	 
}

void	rb(t_stack *stack_b)
{
	stack_b->top++;
	while (stack_b->arr[stack_b->top - 1] != NULL)
	{
		swap(&(stack_b->arr[stack_b->top]), stack_b->arr[stack_b->top - 1]);
		stack_b->top--;
	}
	ft_putstr_fd("rb\n", 1);	 
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putstr_fd("rr\n", 1);
}

void	rra(t_stack *stack_a)
{
	int i;

	i = 0;
	if (stack_a->top < 1)
		return ;
	while (i < stack_a->top)
	{
		swap(&(stack_a->arr[i]), stack_a->arr[i + 1]);
		i++;
	}
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *stack_b)
{
	int i;

	i = 0;
	if (stack_b->top < 1)
		return ;
	while (i < stack_b->top)
	{
		swap(&(stack_b->arr[i]), stack_b->arr[i + 1]);
		i++;
	}
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
