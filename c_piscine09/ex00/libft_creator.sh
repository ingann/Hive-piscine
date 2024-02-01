# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 19:07:06 by iniinisa          #+#    #+#              #
#    Updated: 2024/01/31 12:12:00 by iniinisa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

LIB="libft.a"
SRCS="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
CC="gcc"
CFLAGS="-c -Wall -Wextra -Werror"

$CC $CFLAGS $SRCS
ar rc $LIB *.o
ranlib $LIB
rm *.o
