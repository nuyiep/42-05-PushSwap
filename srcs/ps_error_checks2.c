/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error_checks2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:39:43 by plau              #+#    #+#             */
/*   Updated: 2022/11/26 16:08:32 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Arguments bigger than an integer - error return 1 */
int	check_arg_bigger_than_int(char *str)
{
	int	num;

	num = 0;
	num = ft_atoi(str);
	if ((num == -1 || num == 0) && ft_strlen(str) > 2)
		return (1);
	return (0);
}
