/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:00:13 by plau              #+#    #+#             */
/*   Updated: 2022/09/03 19:30:28 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 *	Swaps the first two indicies of a given stack - sa sb
 *	int c = stack a or stack b
 */
void	swap(t_struct **stack, int c)
{
	t_struct	*tmp1;
	t_struct	*tmp2;

	tmp1 = *stack;
	*stack = (*stack)->next;
	tmp2 = (*stack)->next;
	(*stack)->next = tmp1;
	tmp1->next = tmp2;
	
	set_position(stack);
	if (c == 'a')
		ft_printf("sa\n");
	else if (c == 'b')
		ft_printf("sb\n");
}

/*
 * First element becomes the last one
 */
void	rotate(t_struct **stack, int c)
{
	t_struct	*tmp1;
	t_struct	*tmp2;

	if (!(*stack))
		return ;
	
	tmp1 = *stack;
	*stack = (*stack)->next;
	tmp2 = return_last(*stack);
	tmp2->next = tmp1; 
	tmp1->next = NULL; // end of linked list is NULL
	
	set_position(stack);
	if (c == 'a')
		ft_printf("ra\n");
	else if (c == 'b')
		ft_printf("rb\n");
}