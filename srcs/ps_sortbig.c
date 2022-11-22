/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortbig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:51:13 by plau              #+#    #+#             */
/*   Updated: 2022/11/22 22:29:45 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Find median number */
int	find_median(t_ps *ps)
{
	int median;
	int	i;
	int *sorted_stack;

	median = 0;
	i = 0;
	sorted_stack = get_stack(ps, 'A');
	quicksort(sorted_stack, ps->len_a);
	median = sorted_stack[(ps->len_a) / 2];
	free(sorted_stack);
	return (median);
}

/* Get position */
int	get_pos(t_ps *ps, int number)
{
	int	index;

	index = 0;
	while (1)
	{
		if (ps->b[index] == number)
			return (index);
		else
			index++;
	}
	return (index);
}

int	get_posa(t_ps *ps, int number)
{
	int	index;

	index = 0;
	while (1)
	{
		if (ps->a[index] == number)
			return (index);
		else
			index++;
	}
	return (index);
}

int		get_pos_smaller_than_median(t_ps *ps, int median)
{
	int	pos;
	int	flip;
	int	i;
	
	i = 0;
	flip = 1;
	pos = ps->a[i];
	while (pos > median)
	{
		if (flip == 1)
		{
			pos = ps->a[i];
			i++;
			flip = -1;
		}
		else if (flip == -1)
		{
			pos = ps->a[ps->len_a - i];
			flip = 1;
		}
	}
	return (get_posa(ps, pos));
}

/* Push everything smaller than median into stack b */
void	push_smaller_than_median(t_ps *ps)
{
	int	median;
	int	half;
	
	median = find_median(ps);
	half = ps->len_a / 2;
	if (ps->len_a % 2 != 0)
		half += 1;
	while (ps->len_a > half && ps->len_a > 1)
	{
		if (ps->a[0] < median)
			pb(ps, 1);
		else
			ra(ps, 1);
	}
}

/* Sort stack b */
void	sort_and_push_stack_b(t_ps *ps)
{
	int	*sorted_stack;
	int	i;
	int	index;
	
	i = 0;
	sorted_stack = get_stack(ps, 'B');
	quicksort(sorted_stack, ps->len_b);
	while (ps->len_b)
	{
		index = get_pos(ps, sorted_stack[ps->len_b - 1]);
		if (index == 0)
			pa(ps, 1);
		else if (index >= (ps->len_b / 2))
			rrb(ps, 1);
		else
			rb(ps, 1);
	}
	free(sorted_stack);
}

/* Main function to sort 100 numbers and below */
void	ps_sorthundred(t_ps *ps)
{
	while (ps->len_a > 1)
		push_smaller_than_median(ps);
	sort_and_push_stack_b(ps);
}