# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cereais <cereais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 15:17:26 by cereais           #+#    #+#              #
#    Updated: 2025/04/21 03:16:56 by cereais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := account
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC_DIR  := src
OBJ_DIR  := obj

SRCS     := $(SRC_DIR)/tests.cpp $(SRC_DIR)/Account.cpp $(SRC_DIR)/AccountUtils.cpp
OBJS     := $(OBJ_DIR)/tests.o   $(OBJ_DIR)/Account.o   $(OBJ_DIR)/AccountUtils.o

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

re: fclean all

.PHONY: all clean fclean re
