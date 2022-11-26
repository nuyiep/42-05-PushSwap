/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortbig.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:51:13 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 13:18:15 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Get position of number at stack A */
int	get_pos(t_ps *ps, int number, char c)
{
	int	index;

	index = 0;
	if (c == 'A')
	{
		while (index < ps->len_a)
		{
			if (ps->a[index] == number)
				return (index);
			else
				index++;
		}
	}
	if (c == 'B')
	{
		while (index < ps->len_b)
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
	if (pushed_already)
		return (1);
	else if (ps->b[0] == ps->len_b - 2)
	{
		pa(ps, 1);
		return (1);
	}
	return (0);
}

int	smart_rotate(t_ps *ps, int largest, int pushed_already, int position)
{
	while (ps->b[0] != largest)
	{
		pushed_already = push_second_largest(ps, pushed_already);
		if (ps->b[0] == largest)
			break ;
		if (position > ps->len_b / 2)
			rrb(ps, 1);
		else if (position <= ps->len_b / 2)
			rb(ps, 1);
	}
	return (pushed_already);
}

// 1. FIND BIGGEST NUMBER INDEX (get_pos)
// 2. DECIDE WHETHER TO "RB" OR "RRB"
// 3. PA AND LOOP UNTIL STACK B IS EMPTY
void	ps_push_to_a(t_ps *ps)
{
	int	largest;
	int	pushed_already;

	pushed_already = 0;
	while (ps->len_b > 0)
	{
		if (pushed_already == 0)
			largest = ps->len_b - 1;
		if (ps->b[0] == largest)
		{
			pa(ps, 1);
			if (pushed_already)
			{
				if (ps->b[0] < ps->b[1])
					ss(ps, 1);
				else
					sa(ps, 1);
			}
			pushed_already = 0;
		}
		else
			pushed_already = smart_rotate(ps, largest,
					pushed_already, get_pos(ps, largest, 'B'));
	}
}
