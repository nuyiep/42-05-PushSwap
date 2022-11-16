/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_get_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:50:19 by plau              #+#    #+#             */
/*   Updated: 2022/11/16 11:39:42 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_data(t_ps *ps, char **av)
{
	int	i;

	ps->a = ft_calloc(ps->max, sizeof(int));
	ps->b = ft_calloc(ps->max, sizeof(int));
	i = 0;
	while (i < ps->max)
	{
		ps->a[i] = ft_atoi(av[i + 1]);
		i++;
	}
}
