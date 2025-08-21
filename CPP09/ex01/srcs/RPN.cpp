/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:17 by cereais           #+#    #+#             */
/*   Updated: 2025/08/21 12:14:14 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(std::string input) {
	
	std::string	parsed;
	size_t		posNext = 0;
	size_t		posBefore = 0;
	
	if (input.length() == 0)
		throw Empty();

	while (posNext != std::string::npos) {
		
		posNext = input.find(" ", posBefore);
		parsed = input.substr(posBefore, posNext - posBefore);
		posBefore = posNext + 1;
		if (!verifyInput(parsed))
			throw IlligalInput();
		if (parsed.length() == 0)
			continue ;
		_myStack.push(parsed);
	}
	if (_myStack.empty())
		throw Empty();
} 

RPN::~RPN() {}

RPN::RPN(const RPN& copy) {
	
	this->_myStack = copy._myStack;
}

RPN& RPN::operator=(const RPN& src) {

	if (this != &src)
		this->_myStack = src._myStack;
	return (*this);
}

bool	RPN::verifyInput(std::string parsed) {

	if (parsed.length() == 1) {
		if (parsed == "+" || parsed == "-" || parsed == "*" || parsed == "/")
			return (true);
		else if (isdigit(parsed[0]))
			return (true);
		return (false);
	}
	
	for (std::string::iterator it = parsed.begin(); it != parsed.end(); it++) {

		if (!isdigit(*it))
			return (false);
	}
	return (true);
}

const char* RPN::IlligalInput::what() const throw() {
	return ("ERROR! Illegal character(s) on your input.\n");
}

const char* RPN::Empty::what() const throw() {
	return ("ERROR! Empty or invalid input.\n");
}

void	RPN::printStack() {
	
	while (!_myStack.empty()) {
		std::cout << _myStack.top() << std::endl;
		_myStack.pop();
	}
}