/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:49:46 by plau              #+#    #+#             */
/*   Updated: 2022/11/17 13:39:34 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Take the first element at the top of a and put it at the top of b */
void	pb(t_ps *ps, int print)
{
	swap(&ps->a[0], &ps->b[ps->len_b]);
	ps->len_b++;
	ra(ps, 0);
	ps->len_a--;
	rrb(ps, 0);
	if (print)
		ft_putstr_fd("pb\n", 1);
}

void	rrr(t_ps *ps, int print)
{
	rra(ps, 0);
	rrb(ps, 0);
	if (print)
		ft_putstr_fd("rrr\n", 1);
}
