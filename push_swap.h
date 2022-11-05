/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:15:38 by plau              #+#    #+#             */
/*   Updated: 2022/11/05 19:33:58 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/srcs/libft.h"
#include <stdio.h>

typedef struct s_dlist
{
	int					content;
	struct s_dlist		*previous;
	struct s_dlist		*next;
}   t_dlist;

typedef struct s_data
{
	t_dlist *a;
	t_dlist *b;

	int		total_int;
	char	**str;
	int		*i;
} 	t_data;

/* ************************************************************************** */
/*                                MANDATORY                                   */
/* ************************************************************************** */

/* error checking */

void	error_checks(char **av, t_data *data);
void	check_not_integer(char **av);

/* --- sort_three.c --- */

#endif