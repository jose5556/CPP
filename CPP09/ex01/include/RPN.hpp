/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:28 by cereais           #+#    #+#             */
/*   Updated: 2025/08/20 16:27:16 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stack>

class RPN {
	
public:
	RPN(std::string input);
	~RPN();

	void	verifyInput(std::string parsed);

	class IlligalInput : public std::exception {
		const char* what() const throw();
	};

private:
	RPN();
	RPN(const RPN& copy);
	RPN& operator=(const RPN& src);
	std::stack<std::string> _myStack;
};