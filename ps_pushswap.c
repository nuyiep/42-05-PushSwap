/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:15:50 by plau              #+#    #+#             */
/*   Updated: 2022/11/09 16:04:30 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"



int main(int ac, char **av)
{
	t_psinfo	*psinfo;
	
	if (ac > 1)
	{
		psinfo = malloc(sizeof(t_psinfo));
		get_data(psinfo, av);
	}
	else
		printf("No parameters are specified.");
}

