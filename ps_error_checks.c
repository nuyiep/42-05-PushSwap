/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error_checks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:30:27 by plau              #+#    #+#             */
/*   Updated: 2022/11/13 17:56:35 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Error checking - display "Error\n on std error"*/
/* 1. Arguments that are not integers */
/* 2. Arguments that are bigger than an integer */
/* 3. Remove duplicates */
void	error_checks(char *str)
{
	if (check_not_integer == 1 || check_arg_bigger_than_int == 1
		|| is_duplicate == 1 || is_number == 1 )
		printf("Error\n");
	
}

/* 1. Arguments that are not integers - error return 1 */
int check_not_integer(char **av)
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
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}

/* 2. Arguments bigger than an integer - error return 1 */
int	check_arg_bigger_than_int(char *str)
{
	int num;

	num = 0;
	num = ft_atoi(str);
	if (num > 2147483647)
		return (1);
	if (num < -2147483648)
		return (1);
}

/* 3. Remove duplicate - if is duplicate- Error- return 1 */
int is_duplicate(char *str, t_psinfo *psinfo)
{
	int num;

	num = 0;
	num = ft_atoi(str);
	if (num == psinfo->stack_a)
		return (1);
	return (0);
}

/* Check whether string has numbers in it - no number - error return 1 */
int is_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}