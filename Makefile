# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/06 17:46:09 by lchristi          #+#    #+#              #
#    Updated: 2021/12/06 17:46:13 by lchristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h
SRC = ft_printf.c ft_utils.c
OBJ = ${patsubst %.c,%.o,${SRC}}
RM = rm -f

all:		${NAME}

${NAME}: 	${OBJ}
			ar rcs ${NAME} $?

%.o : %.c	Makefile ${HEADER}
			${CC} ${FLAGS} -c $< -o $@

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
