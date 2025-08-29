/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:28 by cereais           #+#    #+#             */
/*   Updated: 2025/08/29 19:00:39 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

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

	T	_chain;
	T	_subChain;

private:
	PmergeMe();
};

#include "PmergeMe.tpp"

#endif
