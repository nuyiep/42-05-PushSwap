/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:51:13 by plau              #+#    #+#             */
/*   Updated: 2022/11/22 22:25:46 by plau             ###   ########.fr       */
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
	if (ps->len_a % 2 == 0)
		median--;
	free(sorted_stack);
	return (median);
}

/* Get postion of b */
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
	int	*sorted_stack;
	
	i = 0;
	flip = 1;
	pos = ps->a[i];
	sorted_stack = get_stack(ps, 'A');
	quicksort(sorted_stack, ps->len_a);
	while (pos > median || pos == sorted_stack[ps->len_a - 1])
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
	free(sorted_stack);
	// printf("MEDIAN: %d, pos:%d\n", median, get_posa(ps, pos));
	// print_stack(ps);
	return (get_posa(ps, pos));
}

/* Push everything smaller than median into stack b */
void	push_smaller_than_median(t_ps *ps)
{
	int	median;
	int	half;
	int	index;
	
	median = find_median(ps);
	half = ps->len_a / 2;
	if (ps->len_a % 2 != 0)
		half += 1;
	while (ps->len_a > half && ps->len_a > 1)
	{
		index = get_pos_smaller_than_median(ps, median);
		// printf("%d\n", get_pos_smaller_than_median(ps, median));
		// print_stack(ps);
		if (index == 0)
			pb(ps, 1);
		else if (index > ps->len_a / 2)
			rra(ps, 1);
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
		// print_stack(ps);
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
	{
		push_smaller_than_median(ps);
		// print_stack(ps);
	}
	// sort_small(ps);
	// print_stack(ps);
	// exit(1);


	sort_and_push_stack_b(ps);

	// print_stack(ps);
	
	// exit(1);
}