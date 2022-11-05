/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:04:39 by plau              #+#    #+#             */
/*   Updated: 2022/08/14 14:59:16 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
char	*ft_strjoin(char *dst, char *src)
if stash[0] == '\0', will skip the first while loop
	new[0] == tmp[0]
*/
char	*ft_strjoin(char *stash, char *tmp)
{
	char	*new;
	int		i;
	int		j;

	if (!stash)
	{
		stash = malloc(sizeof(char) * 1);
		if (!stash || !tmp)
			return (NULL);
		stash[0] = '\0';
	}
	new = malloc(sizeof(char) * (ft_strlen(stash) + ft_strlen(tmp) + 1));
	if (!new)
		return (NULL);
	i = -1;
	while (stash[++i] != '\0')
		new[i] = stash[i];
	j = -1;
	while (tmp[++j] != '\0')
		new[i + j] = tmp[j];
	new[i + j] = '\0';
	free(stash);
	return (new);
}
