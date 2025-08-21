/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:28 by cereais           #+#    #+#             */
/*   Updated: 2025/08/21 12:11:20 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stack>
#include <cctype>

class RPN {
	
public:
	RPN(std::string input);
	~RPN();
	RPN(const RPN& copy);
	RPN& operator=(const RPN& src);

	bool	verifyInput(std::string parsed);
	void	printStack();

	class IlligalInput : public std::exception {
		const char* what() const throw();
	};
	class Empty : public std::exception {
		const char* what() const throw();
	};

private:
	RPN();
	std::stack<std::string> _myStack;
};