/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:26:21 by plau              #+#    #+#             */
/*   Updated: 2022/11/05 18:56:33 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
*		RRA 1 2 3
*	Only stack A, no stack B
*/

// int		sort_small(t_struct	*stack)
// {
// 	if (stack->len_a <=3)
// 		sort_three(stack);
// 	else if (stack->len_a <= 5)
// 		sort_five(stack);
// 	return (0);
// }

// void	sort_three(t_struct *stack)
// {
// 	int	*sorted_stack;
// 	int	mp;

	
// }

// void	sort_five(t_struct	*stack)
// {
	
// }