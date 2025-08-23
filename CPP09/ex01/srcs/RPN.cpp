/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:17 by cereais           #+#    #+#             */
/*   Updated: 2025/08/23 23:25:04 by cereais          ###   ########.fr       */
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
			throw IllegalInput();
		if (parsed.length() == 0)
			continue ;
		stackParser(parsed);
	}
	if (_myStack.empty())
		throw Empty();
	if (_myStack.size() != 1) {
		throw IllegalOperation();
	} else {
		printStack();
	}
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
		throw IllegalInput();

	if (parsed == "+" || parsed == "-" || parsed == "*" || parsed == "/")
		return (true);
	else if (isDigit(parsed))
		return (true);
	return (false);
}

const char* RPN::IllegalInput::what() const throw() {
	return ("ERROR! Illegal character(s) on your input.\n");
}

const char* RPN::Empty::what() const throw() {
	return ("ERROR! Empty or invalid input.\n");
}

const char* RPN::IllegalOperation::what() const throw() {
	return ("ERROR! Illegal operation.\n");
}

const char* RPN::IllegalDivision::what() const throw() {
	return ("ERROR! Illegal division.\n");
}

void	RPN::printStack() {

	while (!_myStack.empty()) {
		std::cout << _myStack.top() << std::endl;
		_myStack.pop();
	}
}

void	RPN::stackParser(std::string element) {
	
	int	num1;
	int	num2;

	if (isDigit(element)) {

		_myStack.push(element);
	} else if (_myStack.size() > 1) {
		
		num1 = std::atoi(_myStack.top().c_str());
		_myStack.pop();
		num2 = std::atoi(_myStack.top().c_str());
		_myStack.pop();
		mathOperation(num1, num2, element);
	} else {
		throw IllegalOperation();
	}
}

void	RPN::mathOperation(int num1, int num2, std::string element) {

	std::stringstream ss;
	
	if (element == "+") {
		ss << num2 + num1;
		/* std::cout << num2 << " + " << num1 << 
		" = " << num2 + num1 << std::endl; */
	}
	else if (element == "-") {
		ss << num2 - num1;
		/* std::cout << num2 << " - " << num1 << 
		" = " << num2 - num1 << std::endl; */
	}
	else if (element == "*") {
		ss << num2 * num1;
		/* std::cout << num2 << " * " << num1 << 
		" = " << num2 * num1 << std::endl; */
	}
	else if (element == "/") {
		if (num1 == 0 || num2 == 0)
			throw IllegalDivision();
		ss << num2 / num1;
		/* std::cout << num2 << " / " << num1 << 
		" = " << num2 / num1 << std::endl; */
	}
	
	_myStack.push(ss.str());
}

static bool	isDigit(std::string chr) {

	if (isdigit(chr[0]))
		return (true);
	return (false);
}
