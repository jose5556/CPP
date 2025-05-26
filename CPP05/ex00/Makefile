# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cereais <cereais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 15:17:26 by cereais           #+#    #+#              #
#    Updated: 2025/05/26 18:46:58 by cereais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := bureaucrat
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC_DIR  := src
OBJ_DIR  := obj

SRCS     := $(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Bureaucrat.cpp \

OBJS     := $(OBJ_DIR)/main.o \
			$(OBJ_DIR)/Bureaucrat.o \

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@rm -f leaks.out

re: fclean all

leaks:
	$(CXX) $(CXXFLAGS) -fsanitize=address -g $(SRCS) -o leaks.out
	./leaks.out

.PHONY: all clean fclean re