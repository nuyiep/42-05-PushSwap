/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:05:55 by plau              #+#    #+#             */
/*   Updated: 2022/07/17 19:53:51 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (0);
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
d > s means that d's memory is after s
if destination is before source, can use memcpy 

int main(void)
{
    char dst[20];
    char src[20] = "mahmudul hasan";
    char *ret;

    printf("Source:         %s\n", src);
    printf("Destination:    %s\n", src + 3);
    ret = ft_memmove(src + 3, src, 3);
    printf("Output:         %s", ret);
    printf("\n");
    return (0);
}

// 1. Look at the output
// ft_memmove(src + 3, src, 2)
// output: madul hasan

// ft_memmove(src + 3, src, 3)
// output: mahul hasan

// ft_memmove(src + 4, src, 5)
// output: mahmuhasan

no over lapping 
int main()
{
    char dest[] = "Destination"; 
    char source[] = "Source"; 

    puts("dest before memmove ");
    puts(dest);
	puts("source before memmove ");
	puts(source);	
  
	memmove(dest, source, 3);
    puts("\ndest after memmove ");
    puts(dest);
	puts("source after memmove ");
	puts(source);	
    return 0;
}

int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz"; // Array of size 5

    puts("str1 before memmove ");
    puts(str1);
  
    // Copies contents of str2 to sr1 //
    //memmove(str1, str2, sizeof(str2));
	ft_memmove(str1, str2, 3);
    puts("\nstr1 after memmove ");
    puts(str1);
  
    return 0;
}


-	the difference between memmove and memcpy is
	memmove copy src to a buffer first 
-	learn how to malloc 
-	malloc's format 
	int* p = (int*) malloc(sizeof(int))
			need to cast again 
- NULL part- if memory allocation fails, return NULL.
*/
