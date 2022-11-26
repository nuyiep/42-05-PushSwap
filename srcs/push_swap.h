/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:15:38 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 15:57:40 by plau             ###   ########.fr       */
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

/* Quick sort function */
int		partition(int array[], int low, int high);
void	quicksort_recursion(int array[], int low, int high);
void	quicksort(int array[], int length);

/* Error checking */
int		error_checking(int ac, char **av);

/* Get data */
void	get_data(t_ps *ps, char **av, int init);
int		*get_stack(t_ps *ps, char c);

/* Sorting functions len <= 5 */
void	sort_small(t_ps *ps);

/* Sorting function len > 100 */
void	ps_sorthundred(t_ps *ps);
void	ps_push_to_b(t_ps *ps, int chunk_size);
void	ps_push_to_a(t_ps *ps);
void	change_to_index(t_ps *ps);
int		check_arg_bigger_than_int(char *str);

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