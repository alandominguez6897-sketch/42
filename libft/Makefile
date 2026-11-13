# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aladomin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/13 12:37:30 by aladomin          #+#    #+#              #
#    Updated: 2026/11/13 15:03:11 by aladomin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FILES = $(shell find . -name "*.c")

OBJECTS = $(FILES:.c=.o)

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar cr $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)
