# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 15:17:26 by cereais           #+#    #+#              #
#    Updated: 2025/07/29 15:36:56 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := btc
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC_DIR  := srcs
OBJ_DIR  := obj

SRCS     := $(SRC_DIR)/main.cpp $(SRC_DIR)/BitcoinExchange.cpp\

OBJS     := $(OBJ_DIR)/main.o $(OBJ_DIR)/BitcoinExchange.o \

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