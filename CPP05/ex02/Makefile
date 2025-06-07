# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 15:17:26 by cereais           #+#    #+#              #
#    Updated: 2025/06/07 19:02:32 by joseoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := creations
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC_DIR  := src
OBJ_DIR  := obj

SRCS     := $(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Bureaucrat.cpp \
			$(SRC_DIR)/AForm.cpp \
			$(SRC_DIR)/PresidentialPardonForm.cpp \
			$(SRC_DIR)/RobotomyRequestForm.cpp \
			$(SRC_DIR)/ShrubberyCreationForm.cpp \

OBJS     := $(OBJ_DIR)/main.o \
			$(OBJ_DIR)/Bureaucrat.o \
			$(OBJ_DIR)/AForm.o \
			$(OBJ_DIR)/PresidentialPardonForm.o \
			$(OBJ_DIR)/RobotomyRequestForm.o \
			$(OBJ_DIR)/ShrubberyCreationForm.o \

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