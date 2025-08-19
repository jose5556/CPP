/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:28 by cereais           #+#    #+#             */
/*   Updated: 2025/08/19 23:46:50 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stack>

class RPN {
	
public:
	RPN();
	~RPN();
	RPN(const RPN& copy);
	RPN& operator=(const RPN& src);

	

private:
	std::stack<int> _myStack;
};