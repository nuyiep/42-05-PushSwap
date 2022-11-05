/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:42:39 by plau              #+#    #+#             */
/*   Updated: 2022/07/09 17:42:06 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] && s)
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	int		i;
	int		j;
	int		count;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	count = ft_count_word(s, c);
	ans = malloc((count + 1) * sizeof(char *));
	if (!ans)
		return (NULL);
	while (j < count)
	{
		while (s[i] == c)
			i++;
		len = ft_word_len(s, c, i);
		ans[j] = ft_substr(s, i, len);
		i += len;
		j++;
	}
	ans[j] = NULL;
	return (ans);
}
