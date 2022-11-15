/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error_checks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:30:27 by plau              #+#    #+#             */
/*   Updated: 2022/11/15 21:18:43 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Error checking - display "Error\n on std error"*/
/* 1. Arguments that are not integers */
/* 2. Arguments that are bigger than an integer */
/* 3. Remove duplicates */

/* 2. Arguments bigger than an integer - error return 1 */
int	check_arg_bigger_than_int(char *str)
{
	int	num;

	num = 0;
	num = ft_atoi(str);
	if ((num == -1 || num == 0) && ft_strlen(str) > 2)
		return (1);
	return (0);
}

/* 1. Arguments that are not integers - error return 1 */
int	check_not_integer(char **av)
{
	int	i;
	int	k;

	i = 1;
	while (av[i] != NULL)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			if (!(ft_isdigit(av[i][k]) || av[i][k] == ' ' || av[i][0] == '-'))
				return (1);
			k++;
		}
		if (check_arg_bigger_than_int(av[i]))
			return (1);
		i++;
	}
	return (0);
}

/* 3. Remove duplicate - if is duplicate- Error- return 1 */
int	is_duplicate(t_ps *ps, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i] != NULL)
	{
		j = i + 1;
		while (av[j] != NULL)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	ps->len_a = j - 1;
	ps->max = ps->len_a;
	return (0);
}

/* Check whether string has numbers in it - no number - error return 1 */
int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}

int	error_checking(t_ps *ps, int ac, char **av)
{
	if (ac < 2)
		return (1);
	if (check_not_integer(av))
		return (1);
	if (is_duplicate(ps, av))
		return (1);
	return (0);
}
