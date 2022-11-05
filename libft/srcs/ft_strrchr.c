/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:38:25 by plau              #+#    #+#             */
/*   Updated: 2022/07/10 16:40:37 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
others include
if (c == 0)
		return ((char *)s + i);

return value is different??? one return 
- because, if c == 0 or '\0' then it is the same as the last character of s,
it will still fall under the if statement.

	+ i to tell which pointer position

int main()
{
	char str[] = "http://www.tutorialspoint.com";
	char ch = '.';
	char *ret;

	ret = ft_strrchr(str, '.');
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/
