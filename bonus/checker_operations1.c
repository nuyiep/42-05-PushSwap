/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_operations1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:30:37 by plau              #+#    #+#             */
/*   Updated: 2022/11/28 12:47:20 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* Swap the first 2 elements at the top of stack A */
void	sa(t_ps *ps, int print)
{
	if (ps->len_a < 2)
		return ;
	ft_swap(&(ps->a[0]), &(ps->a[1]));
	if (print)
		ft_putstr_fd("sa\n", 1);
}

/* Swap the first 2 elements at the top of stack B */
void	sb(t_ps *ps, int print)
{
	if (ps->len_b < 2)
		return ;
	ft_swap(&(ps->b[0]), &(ps->b[1]));
	if (print)
		ft_putstr_fd("sb\n", 1);
}

/* SA and SB at the same time */
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
	if (ps->len_b == 0)
		return ;
	ft_swap(&ps->b[0], &ps->a[ps->len_a]);
	ps->len_a++;
	rb(ps, 0);
	ps->len_b--;
	rra(ps, 0);
	if (print)
		ft_putstr_fd("pa\n", 1);
}
