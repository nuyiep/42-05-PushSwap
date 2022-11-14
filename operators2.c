/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:22:30 by plau              #+#    #+#             */
/*   Updated: 2022/11/14 13:10:28 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Shift up all elements of stack a by 1 */
/* The first element becomes the last one */
void	ra(t_stack *stack_a)
{
	int len;

	len = stack_a->top;
	if (stack_a->top < 1)
		return ;
	while (len > 0)
	{
		swap(&stack_a->arr[len], &stack_a->arr[len - 1]);
		len--;
	}
	ft_putstr_fd("ra\n", 1);	 
}

/* Shift up all elements of stack b by 1 */
/* The first element becomes the last one */
void	rb(t_stack *stack_b)
{
	int len;

	len = stack_b->top;
	if (stack_b->top < 1)
		return ;
	while (len > 0)
	{
		swap(&stack_b->arr[len], &stack_b->arr[len - 1]);
		len--;
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
