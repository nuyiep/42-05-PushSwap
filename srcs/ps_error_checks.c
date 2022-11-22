/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error_checks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:30:27 by plau              #+#    #+#             */
/*   Updated: 2022/11/22 12:37:39 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Error checking - display "Error\n on std error"*/

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

/* Arguments that are not integers - error return 1 */
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

/* Remove duplicate - if is duplicate- Error- return 1 */
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

/* To handle when numbers are in a string */
/* Turns all input into a string of numbers seperated by spaces */
char	*numbers_into_string(t_ps *ps, char **av)
{
	int		i;
	char	*temp;
	char	*temp2;
	char	*output;

	(void)ps;
	i = 1;
	output = malloc(sizeof(char));
	if (!output)
		return (NULL);
	while (av[i] != NULL)
	{
		if (av[i][0] == '\0')
		{
			free(output);
			return (NULL);
		}
		temp = ft_strjoin(output, av[i]);
		temp2 = output;
		output = ft_strjoin(temp, " ");
		free(temp2);
		free(temp);
	}
	return (output);
}

/* Main function for error checking */
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
