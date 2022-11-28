/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:22:21 by plau              #+#    #+#             */
/*   Updated: 2022/11/28 13:39:50 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
	read_command(&ps);
	return (0);
}
