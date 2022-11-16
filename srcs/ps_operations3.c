/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:49:46 by plau              #+#    #+#             */
/*   Updated: 2022/11/16 22:04:34 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_ps *ps, int print)
{
	int	temp;

	temp = 0;
	if (ps->len_a < 1)
		return ;
	rrb(ps, 0);
	ps->len_b++;
	ps->b[ps->len_b - 1] = ps->b[0];
	ps->b[0] = ps->a[0];
	ra(ps, 0);
	ps->a[ps->len_a - 1] = 0;
	ps->len_a--;
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
