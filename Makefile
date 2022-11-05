# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plau <plau@student.42.kl>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 21:22:00 by plau              #+#    #+#              #
#    Updated: 2022/09/05 15:24:38 by plau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    		= 	libft.a
CC				= 	gcc
AR    			= 	ar rcs
HEADER    		= 	-I libft.h
CFLAGS    		= 	-Wall -Werror -Wextra $(HEADER)
SRCS_DIR		= 	srcs/
OBJS_DIR		= 	objs/
PRINTF_DIR		= 	printf/
SRC_FILES		= 	ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_strlen.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strchr.c \
					ft_atoi.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_atoi.c \
					ft_memmove.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c \
					ft_lstmap.c \
					ft_lstiter.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstadd_back.c \
					ft_lstlast.c \
					ft_lstsize.c \
					ft_lstadd_front.c \
					ft_lstnew.c \
					ft_hexa.c \
					ft_hexapointer.c \
					ft_numbers.c \
					ft_printf.c \
					ft_unsigned.c \
					get_next_line_bonus.c \
					get_next_line_utils_bonus.c \
					get_next_line_utils.c \
					get_next_line.c \		
SRC				=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS    		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

all				:
					mkdir -p $(OBJS_DIR)
					make $(NAME)

$(OBJS_DIR)%.o 	:	$(SRCS_DIR)%.c | $(OBJSF)
					$(CC) $(CFLAGS) -c $< -o $@

$(NAME)			:	$(OBJS)
					$(AR) $(NAME) $(OBJS)

clean			:
					rm -rf $(OBJS_DIR)

fclean			:	clean
					rm -rf $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re
