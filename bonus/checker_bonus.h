/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 18:09:05 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 19:36:53 by plau             ###   ########.fr       */
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

/* Error checking */
int		error_checking(char **av);
int		check_arg_bigger_than_int(char *str);

/* Helper function */
void	print_stack(t_ps *ps);
int		is_sorted(t_ps *ps);
void	change_to_index(t_ps *ps);
void	free_ftsplit(char **split);

/* Get data */
void	get_data(t_ps *ps, char **av, int init);
int		*get_stack(t_ps *ps, char c);

/* Quicksort */
int		partition(int array[], int low, int high);
void	quicksort_recursion(int array[], int low, int high);
void	quicksort(int array[], int length);

#endif