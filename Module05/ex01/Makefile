# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 12:08:39 by frrusso           #+#    #+#              #
#    Updated: 2022/11/07 12:08:41 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	form
SRCS	=	main.cpp Bureaucrat.cpp Form.cpp
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
