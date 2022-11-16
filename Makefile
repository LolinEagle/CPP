# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 14:13:28 by frrusso           #+#    #+#              #
#    Updated: 2022/11/16 14:13:29 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
SRCS	=	main.cpp MyClass.cpp
OBJS	=	${SRCS:.cpp=.o}
DEPS	=	$(SRCS:.cpp=.d)
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
INC		=	-I ./
RM		=	rm -f

.cpp.o:
	${CC} ${FLAGS} -c $< -o $@ ${INC}

${NAME}:${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all:${NAME}

clean:
	${RM} ${OBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all

run:${NAME}
	./${NAME}

.PHONY: all clean fclean re run
