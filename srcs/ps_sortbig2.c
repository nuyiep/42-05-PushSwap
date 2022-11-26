/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sortbig2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:14:13 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 13:16:11 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Main function */
void	ps_sorthundred(t_ps *ps)
{
	int	chunk_size;

	chunk_size = ps->len_a / 12 + 30;
	change_to_index(ps);
	ps_push_to_b(ps, chunk_size);
	ps_push_to_a(ps);
}
