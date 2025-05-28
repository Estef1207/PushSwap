# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esmeza-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 19:02:46 by esmeza-s          #+#    #+#              #
#    Updated: 2025/03/03 19:02:56 by esmeza-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f


# Directorios

SRC_DIR     = src
OBJ_DIR     = obj
INCLUDE_DIR = includes


# Librerías externas

LIBFT_DIR   = myLibft
PRINTF_DIR  = printf

LIBFT_A     = $(LIBFT_DIR)/libft.a
PRINTF_A    = $(PRINTF_DIR)/libftprintf.a


# Archivos fuente

SRC = \
	num_basic.c \
	utils_sort.c \
	aux_lib.c \
	parseo.c \
 	check.c \
	push.c \
	reverse.c \
	rotate.c \
	swap.c \
	stack_init.c \
	main.c 


# Objetos
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))


# Reglas

all: $(NAME)

$(NAME): $(LIBFT_A) $(PRINTF_A) $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(LIBFT_DIR) -I$(PRINTF_DIR) \
	$(OBJS) $(LIBFT_A) $(PRINTF_A) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -c $< -o $@

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)

$(PRINTF_A):
	@$(MAKE) -C $(PRINTF_DIR)

clean:
	$(RM) -r $(OBJ_DIR)
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(MAKE) clean -C $(PRINTF_DIR)

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@$(MAKE) fclean -C $(PRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re
