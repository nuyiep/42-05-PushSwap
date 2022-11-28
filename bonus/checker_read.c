/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:22:11 by plau              #+#    #+#             */
/*   Updated: 2022/11/28 16:17:14 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	comparing(t_ps *ps, char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		sa(ps, 0);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(ps, 0);
	else if (ft_strcmp(str, "ss\n") == 0)
		ss(ps, 0);
	else if (ft_strcmp(str, "pa\n") == 0)
		pa(ps, 0);
	else if (ft_strcmp(str, "ra\n") == 0)
		ra(ps, 0);
	else if (ft_strcmp(str, "rb\n") == 0)
		rb(ps, 0);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(ps, 0);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra(ps, 0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rrb(ps, 0);
	else if (ft_strcmp(str, "pb\n") == 0)
		pb(ps, 0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(ps, 0);
	else
		exit(ft_printf("Error\n"));
}

int	read_command(t_ps *ps)
{
	char	*str;

	str = get_next_line(STDIN_FILENO);
	while (str != NULL)
	{
		comparing(ps, str);
		free(str);
		str = get_next_line(STDIN_FILENO);
	}
	if (is_sorted(ps))
		return (ft_printf("OK\n"));
	else
		return (ft_printf("KO\n"));
}
		// print_stack(ps);
		// //printf("|%s|\n", str);