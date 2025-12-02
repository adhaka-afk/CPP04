# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 15:06:35 by adhaka            #+#    #+#              #
#    Updated: 2025/12/02 05:04:53 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Materia

CC				= c++

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -std=c++11

HEADERS			=	AMateria.hpp \
					Character.hpp \
					Cure.hpp \
					Ice.hpp \
					ICharacter.hpp \
					IMateriaSource.hpp \
					MateriaSource.hpp

SRCS			=	AMateria.cpp \
					Character.cpp \
					Cure.cpp \
					Ice.cpp \
					MateriaSource.cpp \
					main.cpp

OBJS			= $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
		${CC} ${CFLAGS} -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
