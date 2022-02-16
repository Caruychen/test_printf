# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 11:19:44 by cchen             #+#    #+#              #
#    Updated: 2022/02/16 12:58:11 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := test_printf
PRINTF_DIR := /Users/cchen/workspace/10_Printf
FT_PRINTF := libftprintf.a

CC := gcc
CFLAGS := -Wall -Werror -Wextra
INCLUDES := -I$(PRINTF_DIR)/libft -I$(PRINTF_DIR)/includes
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


