# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 13:24:24 by asolano-          #+#    #+#              #
#    Updated: 2023/10/09 08:52:36 by asolano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable name
NAME = fixed

# Compiler
CPP = c++

# Compiler flags
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

# Source files
SRC = main.cpp Fixed.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $@ $(OBJ)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re