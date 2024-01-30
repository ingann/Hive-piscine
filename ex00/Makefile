# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 10:44:55 by iniinisa          #+#    #+#              #
#    Updated: 2024/01/30 11:01:10 by iniinisa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = src/main.c src/ft_utils.c src/ft_print_output.c src/ft_parse_dict.c src/ft_digits.c src/ft_converter.c src/ft_clean_input.c
OBJS = ${SRC:.C=.o}
FLAGS = -Wall -Werror -Wextra

all:	${NAME}
${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}


clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all


.PHONY: all clean fclean
