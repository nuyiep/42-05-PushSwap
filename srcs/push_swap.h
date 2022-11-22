/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:15:38 by plau              #+#    #+#             */
/*   Updated: 2022/11/22 20:16:19 by plau             ###   ########.fr       */
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
int		partition(int array[], int low, int high);
void	quicksort_recursion(int array[], int low, int high);
void	quicksort(int array[], int length);

/* Operations */
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

/* Error checking */
int		error_checking(t_ps *ps, int ac, char **av);

/* Get data */
void	get_data(t_ps *ps, char **av);
int		*get_stack(t_ps *ps, char c);

/* Sort function */
void	sort_small(t_ps *ps);
void	push_smaller_than_median(t_ps *ps);
int		largest_int_stack_b(t_ps *ps);
int		smallest_int_stack_b(t_ps *ps);
void	push_larger_than_median(t_ps *ps);
void	ps_sorthundred(t_ps *ps);
void	sort_and_push_stack_b(t_ps *ps);

/* Helper */
void	print_stack(t_ps *ps);
int		is_sorted(t_ps *ps);

#endif