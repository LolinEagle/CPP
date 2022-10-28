# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frrusso <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 14:08:43 by frrusso           #+#    #+#              #
#    Updated: 2022/10/26 14:08:47 by frrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	diamondtrap
SRCS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
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
