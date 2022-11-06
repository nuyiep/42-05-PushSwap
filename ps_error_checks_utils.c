/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error_checks_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:37:09 by plau              #+#    #+#             */
/*   Updated: 2022/11/06 19:55:47 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h";

/* Error checking: check whether not integer */
void	check_not_integer(char **av)
{
	int i;
	int k;

	i = 1;
	while (av[i] != NULL)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			if (!(ft_isdigit(av[i][k])
				|| av[i][k] == ' ' || av[i][k] == '-' || av[i][k] == '+'))
			{
				ft_printf("Invalid integer character : %c\n", av[i][k]);
				exit (0);
			}
			k++;
		}
		i++;
	}
}

/* Error checking: arguments bigger than an integer */
void	check_arg_bigger_than_int(char *str)
{
	char	*dup;
	int		i;
	
	dup = str;
	i = 0;
	if (dup[i] == '+' || dup[i] == '-')
		i++;
}

