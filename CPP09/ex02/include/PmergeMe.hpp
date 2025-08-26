/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:28 by cereais           #+#    #+#             */
/*   Updated: 2025/08/27 00:04:49 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <deque>

template <typename T>
class PmergeMe {

public:
	PmergeMe(char **input);
	~PmergeMe();
	PmergeMe(const PmergeMe& copy);
	PmergeMe& operator=(const PmergeMe& src);

	bool	inputParser(std::string input);

	class IllegalInput : public std::exception {
		const char* what() const throw();
	};
private:
	PmergeMe();
	T	_chain;
	T	_subChain;

};

#include "PmergeMe.tpp"
