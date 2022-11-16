/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:15:50 by plau              #+#    #+#             */
/*   Updated: 2022/11/16 22:05:00 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_ps(t_ps *ps)
{
	ps->len_a = 0;
	ps->len_b = 0;
	ps->max = 0;
}

int	main(int ac, char **av)
{
	t_ps	ps;

	init_ps(&ps);
	if (error_checking(&ps, ac, av))
		return (printf("Error\n"));
	get_data(&ps, av);
	sort_small(&ps);
	ps.b[0] = 99;
	ps.b[1] = 98;
	ps.b[2] = 97;
	ps.len_b++;
	ps.len_b++;
	ps.len_b++;
	print_stack(&ps);
	rrb(&ps, 1);
	print_stack(&ps);
	system("leaks -q push_swap");
	return (0);
}
