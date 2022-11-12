# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plau <plau@student.42.kl>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 21:22:00 by plau              #+#    #+#              #
#    Updated: 2022/11/08 21:50:49 by plau             ###   ########.fr        #
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
SRC_FILES		= 	ft_isalpha \
					ft_isdigit \
					ft_isalnum \
					ft_isascii \
					ft_isprint \
					ft_strlen \
					ft_memset \
					ft_bzero \
					ft_memcpy \
					ft_toupper \
					ft_tolower \
					ft_strchr \
					ft_atoi \
					ft_strrchr \
					ft_strncmp \
					ft_atoi \
					ft_memmove \
					ft_strlcpy \
					ft_strlcat \
					ft_memchr \
					ft_memcmp \
					ft_strnstr \
					ft_calloc \
					ft_strdup \
					ft_substr \
					ft_strjoin \
					ft_strtrim \
					ft_split \
					ft_itoa \
					ft_isspace \
					ft_strmapi \
					ft_striteri \
					ft_putchar_fd \
					ft_putstr_fd \
					ft_putendl_fd \
					ft_putnbr_fd \
					ft_lstnew \
					ft_lstadd_front \
					ft_lstsize \
					ft_lstlast \
					ft_lstadd_back \
					ft_lstdelone \
					ft_lstclear \
					ft_lstiter \
					ft_lstmap \
					ft_lstmap \
					ft_lstiter \
					ft_lstclear \
					ft_lstdelone \
					ft_lstadd_back \
					ft_lstlast \
					ft_lstsize \
					ft_lstadd_front \
					ft_lstnew \
					ft_hexa \
					ft_hexapointer \
					ft_numbers \
					ft_printf \
					ft_unsigned \
					get_next_line_bonus \
					get_next_line_utils_bonus \
					get_next_line_utils \
					get_next_line
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
