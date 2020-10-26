# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 12:43:37 by isel-jao          #+#    #+#              #
#    Updated: 2020/10/26 11:04:04 by isel-jao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

BLACK	= \033[0;30m
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
PURPLE	= \033[0;35m
CYAN	= \033[0;36m
GRAY	= \033[0;37m
NC		= \033[0m


AR      = ar rcs

NAME    = libftprintf.a
HEAD    = printf.h

SRCS_DIR	=	./srcs/
OBJ_DIR		=	./objs/
INC_DIR		=	./includes/

SRCS    = 	ft_atoi.c \
			ft_printf.c \
			ft_strlen.c \
			is_set.c \
			ft_reset.c \
			ft_getflag.c \
			ft_convflag.c \
			ft_strdup.c \
			ft_puts.c \
			ft_putc.c \
			ft_putd.c \
			ft_putx.c \
			ft_putp.c \
			ft_putu.c \
			ft_charconv.c \
			ft_numconv.c \
			

OBJ			=	$(addprefix $(OBJ_DIR),$(SRCS:.c=.o))

INC			=	$(addprefix -I,$(INC_DIR))

RM			=	/bin/rm -f
RM_DIR		=	/bin/rm -rf

$(OBJ_DIR)%.o:$(SRCS_DIR)%.c $(INC_DIR)*.h
	@$(CC) $(FLAGS) -c $< -o $@

all:
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(NAME) --no-print-directory

$(NAME): $(OBJ)
	@$(AR) $(NAME) $?


clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

eclean: clean fclean

re: fclean all