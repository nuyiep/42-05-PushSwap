/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:15:50 by plau              #+#    #+#             */
/*   Updated: 2022/11/17 21:46:35 by plau             ###   ########.fr       */
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
	print_stack(&ps);
	system("leaks -q push_swap");
	return (0);
}
