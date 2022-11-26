/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortsmall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:19:02 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 19:27:40 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_ps *ps)
{
	int	a;
	int	b;

	a = ps->a[0];
	b = ps->a[1];
	if (a > b)
		sa(ps, 1);
}

void	sort_three(t_ps *ps)
{
	int	a;
	int	b;
	int	c;

	a = ps->a[0];
	b = ps->a[1];
	c = ps->a[2];
	if (a < b && b > c && a < c)
	{
		rra(ps, 1);
		sa(ps, 1);
	}
	else if (a > b && b < c && a < c)
		sa(ps, 1);
	else if (a < b && b > c && a > c)
		rra(ps, 1);
	else if (a > b && b < c && a > c)
		ra(ps, 1);
	else if (a > b && b > c && a > c)
	{
		sa(ps, 1);
		rra(ps, 1);
	}
}

		// printf("smallest: %d\n", smallest);
		// print_stack(ps);
		// printf("%p\n%p\n", &ps->a[0], &ps->a[ps->len_a - 1]);
		// sleep(1);
void	sort_five(t_ps *ps)
{
	int	*sorted_stack;
	int	smallest;

	sorted_stack = get_stack(ps, 'A');
	quicksort(sorted_stack, ps->len_a);
	smallest = sorted_stack[0];
	while (ps->len_a > 3)
	{
		if (ps->a[0] == smallest)
		{
			pb(ps, 1);
			smallest = sorted_stack[1];
		}
		if (smallest == ps->a[ps->len_a - 1]
			|| smallest == ps->a[ps->len_a - 2])
			rra(ps, 1);
		else
			ra(ps, 1);
	}
	sort_three(ps);
	while (ps->len_b)
		pa(ps, 1);
	free(sorted_stack);
}

void	sort_small(t_ps *ps)
{
	if (ps->len_a < 2)
		return ;
	else if (ps->len_a == 2)
		sort_two(ps);
	else if (ps->len_a == 3)
		sort_three(ps);
	else if (ps->len_a <= 5)
		sort_five(ps);
}
