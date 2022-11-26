/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_get_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:50:19 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 14:40:06 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	malloc_stack(t_ps *ps, char **av, int init)
{
	if (init == 0)
	{
		ps->max = ps->len_a;
		ps->a = ft_calloc(ps->max, sizeof(int));
		ps->b = ft_calloc(ps->max, sizeof(int));
		get_data(ps, av, 1);
		ps->len_a = ps->max;
	}
}

/* Allocate memory for stack A and stack B */
/* Fill numbers from av to stack A */
void	get_data(t_ps *ps, char **av, int init)
{
	char	**split;
	int		i;
	int		k;
	int		j;

	i = 0;
	j = 0;
	while (av[++i])
	{
		k = -1;
		split = ft_split(av[i], ' ');
		while (split[++k] != 0)
		{
			if (init == 1)
				ps->a[j++] = ft_atoi(split[k]);
			ps->len_a++;
			free(split[k]);
		}
		free(split);
	}
	malloc_stack(ps, av, init);
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
