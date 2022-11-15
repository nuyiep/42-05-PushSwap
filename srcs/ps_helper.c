/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:24:43 by plau              #+#    #+#             */
/*   Updated: 2022/11/15 21:48:59 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_ps *ps)
{
	int	index;

	index = 0;
	printf("\nIndex\t|    Stack A\t|    Stack B\n");
	printf("--------|---------------|---------------\n");
	while (index < ps->len_a)
	{
		printf("   %d\t|\t%d\t|", index, ps->a[index]);
		if (index < ps->len_b)
			printf("\t%d", ps->b[index]);
		printf("\n");
		index++;
	}
	printf("\n");
}
