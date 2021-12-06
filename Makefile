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
HEADER = libftprintf.a

all:

${NAME}:

%.o:%.c

clean:

fclean:

re:

.PHONY: all clean fclean re
