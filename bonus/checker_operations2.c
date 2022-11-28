/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_operations2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:31:18 by plau              #+#    #+#             */
/*   Updated: 2022/11/28 12:55:54 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* Shift up all elements of stack a by 1 */
/* The first element becomes the last one */
void	ra(t_ps *ps, int print)
{
	int	temp;
	int	i;

	i = 1;
	if (ps->len_a < 2)
		return ;
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

/* Shift up all elements of stack B by 1 */
/* The first element becomes the last one */
void	rb(t_ps *ps, int print)
{
	int	temp;
	int	i;

	if (ps->len_b < 3)
		return ;
	i = 1;
	temp = ps->b[0];
	while (ps->len_b > i)
	{
		ps->b[i - 1] = ps->b[i];
		i++;
	}
	ps->b[ps->len_b - 1] = temp;
	if (print)
		ft_putstr_fd("rb\n", 1);
}

/* RA and RB at the same time */
void	rr(t_ps *ps, int print)
{
	ra(ps, 0);
	rb(ps, 0);
	if (print)
		ft_putstr_fd("rr\n", 1);
}

/* Shift down all elements of stack A by 1 */
/* The last element becomes the first one */
void	rra(t_ps *ps, int print)
{
	int	temp;
	int	i;

	if (ps->len_a < 2)
		return ;
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

/* Shift down all elements of stack B by 1 */
/* The last element becomes the first one */
void	rrb(t_ps *ps, int print)
{
	int	temp;
	int	i;

	if (ps->len_b < 2)
		return ;
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
