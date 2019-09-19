# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenaim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/18 23:29:02 by lbenaim           #+#    #+#              #
#    Updated: 2019/09/19 13:11:44 by lbenaim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HDR		= -Iincludes

OBJS	= ${SRCS:.C=.O}

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

RM		= rm -f

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:	${NAME}

.c.o:
		gcc ${CFLAGS} ${HDR} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:	fclean all
