# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 12:09:26 by frrusso           #+#    #+#              #
#    Updated: 2023/03/16 12:09:29 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	RPN
SRC			=	main.cpp RPN.cpp
CPP			=	c++
CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -MMD
RM			=	rm -rf
INC			=	-I ./
SRC_PATH	=	./
OBJ_PATH	=	./obj/
OBJ_DIRS	=	${OBJ_PATH}
OBJ			=	${addprefix ${OBJ_PATH},${SRC:.cpp=.o}}
DEPS		=	${addprefix ${OBJ_PATH},${SRC:.cpp=.d}}

all:${NAME}

clean:
	${RM} ${OBJ_PATH}

fclean:clean
	${RM} ${NAME}

re:fclean
	make all

run:${NAME}
	clear
	valgrind ./${NAME} "8 9 * 9 - 9 - 9 - 4 - 1 +" "7 7 * 7 -" "1 + 2 + 3 + 5"
	valgrind ./${NAME}
	valgrind ./${NAME} "  6  7  9  9  *  +  -  " "O" "1 +" "1 + 1 1" "1 + 1 +"

${OBJ_PATH}%.o:${SRC_PATH}%.cpp
	${CPP} ${CPPFLAGS} ${INC} -c $< -o $@

${OBJ_DIRS}:
	mkdir ${OBJ_DIRS}

${NAME}:${OBJ_DIRS} ${OBJ}
	${CPP} ${OBJ} -o $@

.PHONY:all clean fclean re run

-include ${DEPS}
