/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortbig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:51:13 by plau              #+#    #+#             */
/*   Updated: 2022/11/25 20:44:16 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* [checked] Find chunk number according to sorted stack A's index */
int	find_chunk_number(t_ps *ps, int chunk_size, int count)
{
	int	chunk_number;
	int	*sorted_stack;
	int	i;

	chunk_number = 0;
	i = 1;
	sorted_stack = get_stack(ps, 'A');
	quicksort(sorted_stack, ps->len_a);
	chunk_number = sorted_stack[(ps->len_a) / chunk_size];
	chunk_number = chunk_number * count;
	free(sorted_stack);
	return (chunk_number);
}

/* Get position of number at stack A */
int	get_pos(t_ps *ps, int number, char c)
{
	int	index;

	index = 0;
	if (c == 'A')
	{
		while (1)
		{
			if (ps->a[index] == number)
				return (index);
			else
				index++;
		}
	}
	if (c == 'B')
	{
		while (1)
		{
			if (ps->b[index] == number)
				return (index);
			else
				index++;
		}
	}
	return (index);
}

/* Push everything smaller than chunk into stack B */
void	ps_push_to_b(t_ps *ps, int chunk_size)
{
	int	n;
	int	pb_count;

	n = 1;
	pb_count = 0;
	while (ps->len_a > 0)
	{
		if (ps->a[0] < (chunk_size * n))
		{
			pb(ps, 1);
			if (ps->b[0] < (chunk_size * n
					- ((chunk_size * n - (chunk_size * (n - 1))) / 2)))
				rb(ps, 1);
			pb_count++;
		}
		else
			ra(ps, 1);
		if ((chunk_size * n) == pb_count)
			n++;
	}
}

// IF TOP IS SECOND LARGEST, RETURN 1
// ELSE RETURN 0
int	push_second_largest(t_ps *ps, int pushed_already)
{
	if (ps->b[0] == ps->len_b - 2 && pushed_already == 0)
	{
		pa(ps, 1);
		return (1);
	}
	else
		return (0);
}

// 1. FIND BIGGEST NUMBER INDEX (get_pos)
// 2. DECIDE WHETHER TO "RB" OR "RRB"
// 3. PA AND LOOP UNTIL STACK B IS EMPTY
void	ps_push_to_a(t_ps *ps)
{
	int	position;
	int	largest;

	while (ps->len_b > 0)
	{
		largest = ps->len_b - 1;
		position = get_pos(ps, largest, 'B');
		if (position == 0)
			pa(ps, 1);
		else if (position != 0)
		{
			while (ps->b[0] != largest)
			{
				if (position > ps->len_b / 2)
					rrb(ps, 1);
				else if (position <= ps->len_b / 2)
					rb(ps, 1);
			}
		}
	}
}

/* Main function */
void	ps_sorthundred(t_ps *ps)
{
	int	chunk_size;

	chunk_size = ps->len_a / 12 + 30;
	change_to_index(ps);
	ps_push_to_b(ps, chunk_size);
	ps_push_to_a(ps);
}
