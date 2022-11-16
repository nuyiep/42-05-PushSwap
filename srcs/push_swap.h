/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:15:38 by plau              #+#    #+#             */
/*   Updated: 2022/11/16 21:46:44 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/srcs/libft.h"

typedef struct s_ps
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	max;
}	t_ps;

/* quick sort function */
void	swap(int *x, int *y);
int		partition(int array[], int low, int high);
void	quicksort_recursion(int array[], int low, int high);
void	quicksort(int array[], int length);

/* Operations */
void	swap(int *x, int *y);
void	sa(t_ps *ps, int print);
void	sb(t_ps *ps, int print);
void	ss(t_ps *ps, int print);
void	ra(t_ps *ps, int print);
void	rb(t_ps *ps, int print);
void	rra(t_ps *ps, int print);
void	rrb(t_ps *ps, int print);
void	pa(t_ps *ps, int print);
void	pb(t_ps *ps, int print);

/* Error checking */
int		error_checking(t_ps *ps, int ac, char **av);

/* Get data */
void	get_data(t_ps *ps, char **av);

/* Sort function */
void	sort_small(t_ps *ps);

/* Helper */
void	print_stack(t_ps *ps);

#endif