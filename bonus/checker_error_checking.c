/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_error_checking.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:06:56 by plau              #+#    #+#             */
/*   Updated: 2022/11/28 13:38:04 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
		if (ft_atoi(av[i]) >= 2147483648 || ft_atoi(av[i]) <= -2147483649)
			return (1);
		i++;
	}
	return (0);
}

/* Turns all input into a string of numbers seperated by spaces */
char	*numbers_into_string(char **av)
{
	int		i;
	char	*temp;
	char	*temp2;
	char	*output;

	i = 1;
	output = ft_calloc(1, sizeof(char));
	while (av[i] != 0)
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
		i++;
	}
	return (output);
}

/* If duplicate, return 1 */
int	check_duplicate(char **split, int j, int k, char *str)
{
	while (split[j] != NULL)
	{
		if (ft_atoi(split[k]) == ft_atoi(split[j]))
		{
			free(str);
			free_ftsplit(split);
			return (1);
		}
		j++;
	}
	return (0);
}

/* Remove duplicate - if is duplicate- Error- return 1 */
int	is_duplicate(char **av)
{
	int		j;
	char	*str;
	char	**split;
	int		k;

	str = numbers_into_string(av);
	if (str == NULL)
		return (1);
	split = ft_split(str, ' ');
	k = 0;
	while (split[k] != 0)
	{
		j = k + 1;
		if (check_duplicate(split, j, k, str))
			return (1);
		k++;
	}
	free(str);
	free_ftsplit(split);
	return (0);
}

/* Main function for error checking - will print Error if is 1 */
int	error_checking(char **av)
{
	if (check_not_integer(av))
		return (1);
	if (is_duplicate(av))
		return (1);
	return (0);
}
