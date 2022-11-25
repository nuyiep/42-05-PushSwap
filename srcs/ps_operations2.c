/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_operations2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:19:50 by plau              #+#    #+#             */
/*   Updated: 2022/11/16 21:53:04 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Shift up all elements of stack a by 1 */
/* The first element becomes the last one */
void	ra(t_ps *ps, int print)
{
	int	temp;
	int	i;

	i = 1;
	temp = ps->a[0];
	if (ps->len_a < 2)
		return ;
	while (ps->len_a > i)
	{
		ps->a[i - 1] = ps->a[i];
		i++;
	}
	ps->a[ps->len_a - 1] = temp;
	if (print)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_ps *ps, int print)
{
	int	temp;
	int	i;

	i = 1;
	temp = ps->b[0];
	if (ps->len_b < 2)
		return ;
	while (ps->len_b > i)
	{
		ps->b[i - 1] = ps->b[i];
		i++;
	}
	ps->b[ps->len_b - 1] = temp;
	if (print)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_ps *ps, int print)
{
	ra(ps, 0);
	rb(ps, 0);
	if (print)
		ft_putstr_fd("rr\n", 1);
}

void	rra(t_ps *ps, int print)
{
	int	temp;
	int	i;

	i = ps->len_a - 2;
	temp = ps->a[ps->len_a - 1];
	if (ps->len_a < 2)
		return ;
	while (i >= 0)
	{
		ps->a[i + 1] = ps->a[i];
		i--;
	}
	ps->a[0] = temp;
	if (print)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_ps *ps, int print)
{
	int	temp;
	int	i;

	i = ps->len_b - 2;
	temp = ps->b[ps->len_b - 1];
	if (ps->len_b < 2)
		return ;
	while (i >= 0)
	{
		ps->b[i + 1] = ps->b[i];
		i--;
	}
	ps->b[0] = temp;
	if (print)
		ft_putstr_fd("rrb\n", 1);
}