/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:40:40 by plau              #+#    #+#             */
/*   Updated: 2022/08/14 13:33:08 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h> //read, close
# include <stdlib.h> //malloc, free
# include <fcntl.h>  //open (testing)
# include <stdio.h> //printf (testing)

//macros
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# define FILE_MAX 1024

char			*get_next_line(int fd);
unsigned int	ft_strlen(char *str);
char			*ft_strjoin(char *stash, char *tmp);

#endif