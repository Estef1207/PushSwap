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

NAME = push_swap

INC_DIR = includes

SRC = \
	algoritm/num_basic.c \
	algoritm/utils/utils_sort.c \
	aux/aux_lib.c \
	parseo.c \
 	review/check.c \
	src/action/push.c \
	src/action/reverse.c \
	src/action/rotate.c \
	src/action/swap.c \
	src/stack_init.c \
	utils.c main.c 

OBJS = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra -I$(INC_DIR)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c Makefile $(INC_DIR)/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
