# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 14:01:19 by frrusso           #+#    #+#              #
#    Updated: 2022/07/07 14:01:22 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++
RM		=	rm -f
FLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	phonebook
SRCS	=	main.cpp
OBJS	=	${SRCS:.cpp=.o}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all:${NAME}

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all

.PHONY: all clean fclean re
