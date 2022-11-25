/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:15:50 by plau              #+#    #+#             */
/*   Updated: 2022/11/25 21:49:01 by plau             ###   ########.fr       */
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
	int		largest;
	int		smallest;

	largest = 0;
	smallest = 0;
	init_ps(&ps);
	if (error_checking(&ps, ac, av))
		return (printf("Error\n"));
	get_data(&ps, av);
	if (is_sorted(&ps))
		return (0);
	if (ps.max <= 5)
		sort_small(&ps);
	else
		ps_sorthundred(&ps);
	// system("leaks -q push_swap");
	return (0);
}
