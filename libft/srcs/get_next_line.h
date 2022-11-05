/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:04:34 by plau              #+#    #+#             */
/*   Updated: 2022/08/14 16:18:18 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h> //read, close
# include <stdlib.h> //malloc, free
# include <fcntl.h>  //open (testing)
# include <stdio.h> //printf (testing)

//macros
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# define FILE_MAX 1023

char			*get_next_line(int fd);
unsigned int	ft_strlen(char *str);
char			*ft_strjoin(char *stash, char *tmp);

#endif