/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:36:54 by plau              #+#    #+#             */
/*   Updated: 2022/11/16 22:03:07 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	sa(t_ps *ps, int print)
{
	if (ps->len_a < 2)
		return ;
	swap(&(ps->a[0]), &(ps->a[1]));
	if (print)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_ps *ps, int print)
{
	if (ps->len_b < 2)
		return ;
	swap(&(ps->b[0]), &(ps->b[1]));
	if (print)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_ps *ps, int print)
{
	sa(ps, 0);
	sb(ps, 0);
	if (print)
		ft_putstr_fd("ss\n", 1);
}

/* Take the first element at the top of b and put it at the top of a */
void	pa(t_ps *ps, int print)
{
	int	temp;

	temp = 0;
	if (ps->len_b < 1)
		return ;
	rra(ps, 0);
	temp = ps->a[0];
	ps->a[ps->len_a - 1] = ps->a[0];
	ps->a[0] = ps->b[0];
	ps->len_a++;
	rb(ps, 0);
	ps->b[ps->len_b - 1] = 0;
	ps->len_b--;
	if (print)
		ft_putstr_fd("pa\n", 1);
}
