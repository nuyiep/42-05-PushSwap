/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_get_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:50:19 by plau              #+#    #+#             */
/*   Updated: 2022/11/17 21:53:30 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Allocate memory for stack A and stack B */
/* Fill numbers from av to stack A */
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

/* Creates a copy of a stack */
int	*get_stack(t_ps *ps, char c)
{
	int	i;
	int	*copy;

	if (c == 'A')
	{
		copy = malloc(sizeof(int) * ps->len_a);
		if (!copy)
			return (NULL);
		i = -1;
		while (++i < ps->len_a)
			copy[i] = ps->a[i];
		return (copy);
	}
	if (c == 'B')
	{
		copy = malloc(sizeof(int) * ps->len_b);
		if (!copy)
			return (NULL);
		i = -1;
		while (++i < ps->len_b)
			copy[i] = ps->b[i];
		return (copy);
	}
	return (NULL);
}
