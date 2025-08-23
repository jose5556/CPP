/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:28 by cereais           #+#    #+#             */
/*   Updated: 2025/08/23 23:24:38 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <stack>
#include <cctype>
#include <sstream>
#include <cstdlib>

class RPN
{

public:
	RPN(std::string input);
	~RPN();
	RPN(const RPN &copy);
	RPN &operator=(const RPN &src);

	bool verifyInput(std::string parsed);
	void printStack();
	void stackParser(std::string element);
	void mathOperation(int num1, int num2, std::string element);

	class IllegalInput : public std::exception
	{
		const char *what() const throw();
	};
	class Empty : public std::exception
	{
		const char *what() const throw();
	};
	class IllegalOperation : public std::exception
	{
		const char *what() const throw();
	};
	class IllegalDivision : public std::exception
	{
		const char *what() const throw();
	};

private:
	RPN();
	std::stack<std::string> _myStack;
	int _result;
};
