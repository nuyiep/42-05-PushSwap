/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortsmall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:19:02 by plau              #+#    #+#             */
/*   Updated: 2022/11/16 20:40:38 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_ps *ps)
{
	int a;
	int b;

	a = ps->a[0];
	b = ps->a[1];

	if (a > b)
		sa(ps);
}

// void	sort_three(t_ps *ps)
// {
// 	int	a;
// 	int	b;
// 	int	c;

// 	a = ps->a[0];
// 	b = ps->a[1];
// 	c = ps->a[2];
	
// 	if (a < b && c < b)
// 	{
// 		rra(ps->a);
// 		sa(ps->a);
// 	}
// 	else if (a > b && b < c)
// 		sa(ps->a);
// 	else if (a < b && b > c)
// 		rra(ps->a);
// 	else if (a > b && b < c)
// 		ra(ps->a);
// 	else if (a > b && b > c)
// 	{
// 		sa(ps->a);
// 		rra(ps->a);
// 	}
// }

void	sort_small(t_ps *ps)
{
	if (ps->len_a == 2)
		sort_two(ps);
	// else if (ps->len_a == 3)
	// 	sort_three(ps);
}
