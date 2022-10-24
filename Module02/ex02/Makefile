# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 12:02:43 by frrusso           #+#    #+#              #
#    Updated: 2022/10/21 12:02:45 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
SRCS	=	main.cpp Fixed.cpp
OBJS	=	${SRCS:.cpp=.o}
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

.cpp.o:
	${CC} ${FLAGS} -c $< -o $@

${NAME}:${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all:${NAME}

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all

.PHONY: all clean fclean re
