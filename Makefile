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

NAME = pushswap

SRC = push_swap.c utils.c

OBJS = $(SRC:.c=.o)

LIBFT_PATH = ../libft

LIBFT = $(LIBFT_PATH)/libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra -I$(LIBFT_PATH)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c Makefile pushswap.h
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_PATH)

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all clean fclean re
