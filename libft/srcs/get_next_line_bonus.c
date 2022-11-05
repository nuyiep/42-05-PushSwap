/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:45:23 by plau              #+#    #+#             */
/*   Updated: 2022/08/14 18:01:24 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	check_new_line(char *stash)
{
	int	i;

	i = 0;
	if (!stash)
		return (0);
	while (stash[i] != '\0')
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
/*
save the extra character / reset the static variable
*/

char	*remove_after_read(char *stash)
{
	int		i;
	int		j;
	char	*output;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == '\0')
	{
		free(stash);
		return (NULL);
	}
	output = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!output)
		return (NULL);
	j = 0;
	while (stash[++i])
	{
		output[j] = stash[i];
		j++;
	}
	output[j] = '\0';
	free(stash);
	return (output);
}

/*
while loop- if either #1 or #2 is satisfied, loop with stop
	1.	reach \n 
	2.	reach \0 - EOF
output is HelloWorld\n\0
*/

char	*get_output(char	*stash)
{
	char	*output;
	int		i;
	int		j;

	if (stash[0] == '\0')
		return (NULL);
	i = 0;
	while (stash[i] != '\0' && stash[i] != '\n')
		i++;
	output = malloc(sizeof(char) * (i + 1 + (stash[i] == '\n')));
	j = 0;
	while (stash[j] != '\0' && stash[j] != '\n')
	{
		output[j] = stash[j];
		j++;
	}
	if (stash[j] == '\n')
	{
		output[j] = stash[j];
		j++;
	}
	output[j] = '\0';
	return (output);
}

/*
man 2 read
- read(int fd, void *buf, size_t nbyte)
	read into the buffer pointed to by buf

return value (i)
	- if successful, return the number of bytes actually read.
	- 0: reach the end of file
	- -1: file does not exist or no permission to read

while loop
	1.	check_new_line(stash) != 1
		if stash[i] is a \n, stop the loop and return
		E.g. 
		Buffer_size = 7 using the example below
		during the second loop, 7+7, there is a \n
		
	2.	i != 0
		zero means reach the EOF, nothing left to read
		
*/
char	*get_new_line(int fd, char *stash)
{
	char	*tmp;
	int		i;

	i = 88888888;
	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	while (check_new_line(stash) != 1 && i != 0)
	{
		i = read(fd, tmp, BUFFER_SIZE);
		if (i == -1)
		{
			free(tmp);
			return (NULL);
		}
		if (!tmp)
			break ;
		tmp[i] = '\0';
		stash = ft_strjoin(stash, tmp);
	}
	free(tmp);
	return (stash);
}

/*
static variable
	- 	data persists until the end of the program,
		whether or not the function in which it was declared ends
	-	in this case, necessary to store the extra characters, 
		read after a \n.
		so that when we call get_next_line again to get the next 
		line, those characters are not lost.
*/
char	*get_next_line(int fd)
{
	static char	*stash[1024];
	char		*output;

	if (fd < 0 || fd > FILE_MAX || BUFFER_SIZE < 1)
		return (NULL);
	stash[fd] = get_new_line(fd, stash[fd]);
	output = get_output(stash[fd]);
	stash[fd] = remove_after_read(stash[fd]);
	return (output);
}
/*
Hello_World\n
Text12346789

Stash is null initially
Buffer_size = 7
i = 7
Stash: Hello_W (7)
Stash: 	Hello_W (7)
		orld\nTe (7) (2nd loop- read 7 bytes again)
output:	Hello_World\n

after remove_after_read
output: Te\0 
output[3]

stash is now Te\0
*/