/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:17 by cereais           #+#    #+#             */
/*   Updated: 2025/08/20 16:27:27 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(std::string input) {
	
	std::string	parsed;
	size_t		posNext = 0;
	size_t		posBefore = 0;
	
	while (posNext != std::string::npos) {
		
		posNext = input.find(" ", posBefore);
		parsed = input.substr(posBefore, posNext);
		posBefore = posNext;
		try {
			verifyInput(parsed);
		} catch (std::exception &e) {
			std::cerr << e.what();
		}
		_myStack.push(parsed);
	}
} 

RPN::~RPN() {}

void	RPN::verifyInput(std::string parsed) {
	
	for (std::string::iterator it = parsed.begin(); it != parsed.end(); it++) {
		if (isdigit(*it))
			continue ;
		else if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
			continue ;
		else
			throw IlligalInput();
	}
}

const char* RPN::IlligalInput::what() const throw() {
	return ("ERROR! Ill igal character(s) on your input.");
}