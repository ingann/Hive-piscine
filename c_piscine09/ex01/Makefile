# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 12:19:03 by iniinisa          #+#    #+#              #
#    Updated: 2024/02/01 19:10:46 by iniinisa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}
HDRS = includes/ft.h
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar -rv ${NAME} ${OBJS}
	ranlib ${NAME}

obj/%.o: srcs/%.c ${HDRS}
	cc ${CFLAGS} -c $< -o $@
clean:
	rm -rf ${OBJS} *.o

fclean: clean
	rm -rf ${NAME}

re:	fclean all
