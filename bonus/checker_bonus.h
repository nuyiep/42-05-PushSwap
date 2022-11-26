/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:09:05 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 22:19:39 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../libft/srcs/libft.h"
# include <stdio.h>

typedef struct s_ps
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	max;
}	t_ps;

/* Read command */
int		read_command(t_ps *ps);

/* Quicksort */
int		partition(int array[], int low, int high);
void	quicksort_recursion(int array[], int low, int high);
void	quicksort(int array[], int length);

/* Error checking */
int		error_checking(char **av);
int		check_arg_bigger_than_int(char *str);

/* Get data */
void	get_data(t_ps *ps, char **av, int init);
int		*get_stack(t_ps *ps, char c);

/* Operators */
void	sa(t_ps *ps, int print);
void	sb(t_ps *ps, int print);
void	ss(t_ps *ps, int print);
void	ra(t_ps *ps, int print);
void	rb(t_ps *ps, int print);
void	rr(t_ps *ps, int print);
void	rra(t_ps *ps, int print);
void	rrb(t_ps *ps, int print);
void	rrr(t_ps *ps, int print);
void	pa(t_ps *ps, int print);
void	pb(t_ps *ps, int print);

/* Helper function */
void	print_stack(t_ps *ps);
int		is_sorted(t_ps *ps);
void	change_to_index(t_ps *ps);
void	free_ftsplit(char **split);

#endif