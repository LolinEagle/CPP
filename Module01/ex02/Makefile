# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:23:23 by frrusso           #+#    #+#              #
#    Updated: 2022/07/20 17:23:26 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	hi_this_is_brain
SRCS	=	srcs/main.cpp
OBJS	=	${SRCS:.cpp=.o}
DEPS	=	$(SRCS:.cpp=.d)
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
INC		=	-I ./incs
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
