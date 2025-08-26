/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:42:33 by cereais           #+#    #+#             */
/*   Updated: 2025/08/27 00:07:59 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

bool	inputValidation(std::string input);

template <typename T>
PmergeMe<T>::PmergeMe(char **input) {

	while (*input) {
		
		if (!inputParser(*input)) {
			throw IllegalInput();
		}
		input++;
	}
	
}

template <typename T>
PmergeMe<T>::~PmergeMe() {}

template <typename T>
PmergeMe<T>::PmergeMe(const PmergeMe& copy) {
	
	this->_chain = copy._chain;
	this->_subChain = copy._subChain;
}

template <typename T>
PmergeMe<T> &PmergeMe<T>::operator=(const PmergeMe& src) {
	
	if (this != &src) {
		this->_chain = src._chain;
		this->_subChain = src._subChain;
	}
	return (*this);
}

template <typename T>
bool	PmergeMe<T>::inputParser(std::string input) {

	std::string::iterator	it;
	int						num;

	for (it = input.begin(); it < input.end(); it++) {

		if (!isdigit(*it))
			return (false);
		num = atoi(input.c_str());
		_chain.push_back(num);
	}
	return (true);
}

template <typename T>
const char* PmergeMe<T>::IllegalInput::what() const throw() {
    return ("ERROR! Invalid input, please make sure you type a valid positive integer.");
}