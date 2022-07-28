# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 18:03:59 by frrusso           #+#    #+#              #
#    Updated: 2022/07/28 18:04:01 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	sed_is_for_losers
SRCS	=	${addprefix srcs/, \
				main.cpp \
			}
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
