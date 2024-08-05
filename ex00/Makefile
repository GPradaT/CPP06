# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 13:30:03 by gprada-t          #+#    #+#              #
#    Updated: 2024/08/05 11:07:29 by gprada-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConverter

SRCS = toInt_toChar.cpp \
       toFloat_toDouble.cpp \
       myException.cpp \
       ScalarConverter.cpp \
       main.cpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

CPPNDFLAGS = c++ -std=c++98 #-Wall -Wextra -Werror -fsanitize=address -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	$(CPPNDFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp 
	$(CPPNDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include: $(DEPS)

