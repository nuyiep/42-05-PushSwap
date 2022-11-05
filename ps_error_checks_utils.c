/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error_checks_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:37:09 by plau              #+#    #+#             */
/*   Updated: 2022/11/05 19:13:10 by plau             ###   ########.fr       */
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

// /* Count integer (why though) */
// void	integer_count(char **av, t_data *data)
// {
// 		int index;
// 		int i;

// 		index = 1;
// 		while (av[index] != NULL)
// 		{
// 			i = -1;
// 			data->str = ft_split(av[index], ' ');
// 			while (data->str[i] != NULL)
// 				data
// 		}
// }
