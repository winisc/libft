# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 13:00:48 by wsilveir          #+#    #+#              #
#    Updated: 2025/07/09 13:00:49 by wsilveir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IDIR = includes
NAME = libft.a
SRCDIR = srcs

CC = cc
FLAGS = -Wall -Wextra -Werror -I$(IDIR)

SRCS = $(wildcards *.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: $(SRCDIR)/%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
