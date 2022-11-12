
#include "push_swap.h"

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

