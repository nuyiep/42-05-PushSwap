
#include "push_swap.h"

void get_stack_a(int ac, char **av, t_stack **stack_a)
{
	int		i;
	int		index;
	int		number;
	char	**split;

	(void)av;
	*stack_a = malloc(sizeof(t_stack));
	i = 1;
	number = 0;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		check_input_error(split, stack_a, &number);
		i++;
	}
	(*stack_a)->arr = malloc(number * sizeof(int));
	(*stack_a)->top = -1; //??
	index = number - 1;
	i = 1;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		check_number_errors(split, number, stack_a, &index);
	}
}

/* Calculate the number of input */
// "    123    1  -1 +2"
static void get_input(t_psinfo *psinfo, char **av)
{
	int i;
	int j;

	i = 0;
	psinfo->len_a = 0;
	while (av[++i] != '\0')
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			while (ft_isspace(av[i][j]) || av[i][j] == '-' || av[i][j] == '+')
				j++;
			while (!ft_isspace(av[i][j]) && av[i][j] != '\0')
				j++;
			psinfo->len_a++;
		}
	}
	psinfo->total_len = psinfo->len_a;
}

int get_data(t_psinfo *psinfo, char **av)
{
	get_input(psinfo, av);
}

