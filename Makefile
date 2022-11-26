# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plau <plau@student.42.kl>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 19:41:04 by plau              #+#    #+#              #
#    Updated: 2022/11/26 22:35:41 by plau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
BONUS_NAME	=	checker
LIBFT		=	libft.a
CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror
# CFLAGS			+=	-fsanitize=address -g3
SRCS_FILES	=	ps_helper \
				ps_pushswap \
				ps_get_data \
				ps_error_checks \
				ps_sortsmall \
				ps_operations \
				ps_operations2 \
				ps_operations3 \
				ps_quicksort	\
				ps_sortbig	\
				ps_sortbig2
BONUS_FILES	=	checker_main_bonus \
				checker_error_checking \
				checker_helper \
				checker_get_data \
				checker_quicksort \
				checker_read \
				checker_operations1 \
				checker_operations2 \
				checker_operations3 
SRCS		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_FILES)))
OBJS		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))
BONUS_SRCS	=	$(addprefix $(BONUS_DIR), $(addsuffix .c, $(BONUS_FILES)))
BONUS_OBJS	=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_FILES)))
SRCS_DIR	=	srcs/
LIBFT_DIR	=	libft
OBJS_DIR	=	objs/
BONUS_DIR	=	bonus/

all:			
				mkdir -p $(OBJS_DIR)
				make libft
				make $(NAME)

bonus:
				mkdir -p $(OBJS_DIR)
				make libft
				make $(BONUS_NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
				$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: $(BONUS_DIR)%.c
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(LIBFT_DIR)/$(LIBFT) $(OBJS) -o $(NAME)

$(BONUS_NAME):	$(BONUS_OBJS)
				$(CC) $(CFLAGS) $(LIBFT_DIR)/$(LIBFT) $(BONUS_OBJS) -o $(BONUS_NAME)

libft:
				make -C $(LIBFT_DIR)

clean:
				rm -rf $(OBJS_DIR)
				make clean -C $(LIBFT_DIR)

fclean:			clean
				make fclean -C $(LIBFT_DIR)
				rm -rf $(NAME)
				rm -rf $(BONUS_NAME)

re:				fclean all

.PHONY:			all bonus libft clean fclean re