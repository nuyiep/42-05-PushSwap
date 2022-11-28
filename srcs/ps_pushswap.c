/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:15:50 by plau              #+#    #+#             */
/*   Updated: 2022/11/28 13:40:05 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Initialize the data in struct */
void	init_ps(t_ps *ps)
{
	ps->len_a = 0;
	ps->len_b = 0;
	ps->max = 0;
}

/* Start of the main function */
int	main(int ac, char **av)
{
	t_ps	ps;

	init_ps(&ps);
	if (ac < 2)
		return (0);
	if (error_checking(av))
		return (ft_printf("Error\n"));
	get_data(&ps, av, 0);
	if (is_sorted(&ps))
		return (0);
	if (ps.max <= 5)
		sort_small(&ps);
	else
		ps_sorthundred(&ps);
	return (0);
}
// system("leaks -q push_swap");
