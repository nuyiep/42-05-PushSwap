# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plau <plau@student.42.kl>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 21:22:00 by plau              #+#    #+#              #
#    Updated: 2022/11/15 18:23:12 by plau             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR     = \033[0;39m
GRAY         = \033[0;90m
RED         = \033[0;91m
GREEN         = \033[0;92m
YELLOW         = \033[0;93m
BLUE         = \033[0;94m
MAGENTA     = \033[0;95m
CYAN         = \033[0;96m
WHITE         = \033[0;97m
NAME		= push_swap

CC			= gcc

LIBFT_DIR	= libft/
OBJS_DIR	= objs/

#CFLAGS	= -Wall -Werror -Wextra -I . -fsanitize=address -g3
LIBFTFLAGS	= -L$(LIBFT_DIR) -lft

SRC_FILES	= ps_pushswap \
				ps_error_checks \


SRCS	= $(addsuffix .c, $(SRC_FILES))
OBJS	= $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

all		:
		@mkdir -p $(OBJS_DIR)
		@echo "$(MAGENTA) --------------------------INSIDE LIBFT-------------------------- $(CYAN)"
		@echo "\n"
		@make -C ${LIBFT_DIR}
		@echo "$(MAGENTA) --------------------------INSIDE PUSH_SWAP-------------------------- $(CYAN)"
		@echo "\n"
		@make $(NAME)
		@echo "$(YELLOW)Done Creating ./push_swap$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) -------------$(RED)I $(CYAN)AM $(GREEN)DONE $(YELLOW)YAY$(GREEN)-------------------------- $(DEF_COLOR)"

${OBJS_DIR}%.o:	%.c
		@$(CC) $(CFLAGS) -c $^ -o $@
		@echo "$(GREEN)Compiling $<...$(DEF_COLOR)"


$(NAME)	: ${OBJS}
		@${CC} ${CFLAGS} ${OBJS} ${LIBFTFLAGS} -o ${NAME}
		@echo "$(GREEN)Creating ./push_swap ...$(DEF_COLOR)"


clean	:
		rm -rf $(OBJS_DIR)
		make clean -C ${LIBFT_DIR}

fclean	:	clean
		rm -f $(NAME)
		make fclean -C ${LIBFT_DIR}

re		:fclean all

.PHONY	:all clean fclean re