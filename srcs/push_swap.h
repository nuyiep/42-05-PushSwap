/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:15:38 by plau              #+#    #+#             */
/*   Updated: 2022/09/05 18:01:31 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/srcs/libft.h"

typedef struct s_struct
{
	int	len_a;
	int	len_b;
	int	total_len;
	int	mp;
	int	*stack_a;
	int	*stack_b;
}   t_struct;

/* ************************************************************************** */
/*                                MANDATORY                                   */
/* ************************************************************************** */

/* --- sort_three.c --- */
void        sort_three(t_struct **stack);

#endif