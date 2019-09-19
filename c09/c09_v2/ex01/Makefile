# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 17:47:00 by lbenaim           #+#    #+#              #
#    Updated: 2019/09/19 17:47:13 by lbenaim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCLUDES = includes

OBJS = ${SRCS:.c=.o}

GCC = gcc

RM = rm -f

AR = ar rc

CFLAGS = -Wall -Wextra -Werror -I${INCLUDES}

.c.o:
				${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
