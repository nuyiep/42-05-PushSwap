/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:24:43 by plau              #+#    #+#             */
/*   Updated: 2022/11/22 19:06:36 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_ps *ps)
{
	int	index;

	index = 0;
	printf("\nIndex\t|    Stack A\t|    Stack B\n");
	printf("--------|---------------|---------------\n");
	while (index < ps->len_a || index < ps->len_b)
	{
		printf("   %d\t|\t", index);
		if (index < ps->len_a)
			printf("%d", ps->a[index]);
		printf("\t|");
		if (index < ps->len_b)
			printf("\t%d", ps->b[index]);
		printf("\n");
		index++;
	}
	printf("\n");
}

/* Is sorted - return 1 */
int	is_sorted(t_ps *ps)
{
	int	i;

	i = 0;
	while (i < (ps->len_a - 1))
	{
		if (ps->a[i] > ps->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
