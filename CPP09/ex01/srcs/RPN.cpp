/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:17 by cereais           #+#    #+#             */
/*   Updated: 2025/08/22 21:45:29 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

static bool	isDigit(std::string chr);

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
		mathNums(parsed);
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

	if (parsed.length() != 1)
		throw IlligalInput();

	if (parsed == "+" || parsed == "-" || parsed == "*" || parsed == "/")
		return (true);
	else if (isDigit(parsed))
		return (true);
	return (false);
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

void	RPN::mathNums(std::string chr) {
	

	static int	twoDigits = 0;
	static bool	token = false;

	_myStack.push(chr);   //push into the stack wherever is the arg

	if (isDigit(chr))  //update static funcs to the arg type
		twoDigits++;
	else
		token = true;
		
	if (twoDigits == 2 && token) {
		
		stackParser();
		token = false;
		twoDigits = 1;
	}
}

void	RPN::stackParser() {

	std::string	num1;
	std::string	num2;
	std::string	token;
	int			result;

	while (!_myStack.empty()) {

		if (!_myStack.empty() && !isDigit(_myStack.top())) {
			token = _myStack.top();
			_myStack.pop();
		} else if (!_myStack.empty() && isDigit(_myStack.top())) {

			if (num1.empty())
				num1 = _myStack.top();
			else
				num2 = _myStack.top();
			_myStack.pop();
		}
	}
	result = mathOperation(num1, token, num2);
	
} 

static bool	isDigit(std::string chr) {

	if (isdigit(chr[0]))
		return (true);
	return (false);
}
