# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 15:06:35 by adhaka            #+#    #+#              #
#    Updated: 2024/01/30 02:48:18 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= Brain

CC				= c++

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -std=c++98

HEADERS			=	Animal.hpp \
					Brain.hpp \
					Cat.hpp \
					Dog.hpp \
					WrongAnimal.hpp \
					WrongCat.hpp

SRCS			=	Animal.cpp \
					Brain.cpp \
					Cat.cpp \
					Dog.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp \
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
