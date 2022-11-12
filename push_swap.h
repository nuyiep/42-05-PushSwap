/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:15:38 by plau              #+#    #+#             */
/*   Updated: 2022/11/08 19:39:56 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/srcs/libft.h"
#include <stdio.h>

typedef struct s_psinfo
{
	int	len_a;
	int	len_b;
	int	total_len;
	int	mp;
	int	*stack_a;
	int	*stack_b;
}	t_psinfo;

/* error checking */
void	check_not_integer(char **av);

#endif