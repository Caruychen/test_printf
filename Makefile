# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:19:44 by cchen             #+#    #+#              #
#    Updated: 2022/03/16 09:03:27 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test_printf
#PRINTF_DIR := /Users/cchen/workspace/10_Printf
PRINTF_DIR := /Users/cchen/workspace/verif
#PRINTF_DIR := /Users/cchen/workspace/private_printf
#PRINTF_DIR := /Users/caruychen/Hive/42Hive-ft_printf
FT_PRINTF := libftprintf.a

CC := gcc
CFLAGS := -Wall -Werror -Wextra
INCLUDES := -I$(PRINTF_DIR)/libft -I$(PRINTF_DIR)/includes -I./includes
LIB :=  -L$(PRINTF_DIR) -lftprintf

SRC_DIR := ./src
SRC := $(shell find $(SRC_DIR) -type f | grep -E "\.c$$")

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(MAKE) -C $(PRINTF_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) $(LIB) $(SRC) -o $@

clean:
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	$(MAKE) -C $(PRINTF_DIR) fclean
	@rm -f $(NAME)

re: fclean all


