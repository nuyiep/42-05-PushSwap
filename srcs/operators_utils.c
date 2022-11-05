/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:48:54 by plau              #+#    #+#             */
/*   Updated: 2022/09/03 18:53:08 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * Returns the final element of a list
 */ 
t_struct	*return_last(t_struct *node)
{
	while (node && node->next)
		node = node->next;
	return (node);
}

