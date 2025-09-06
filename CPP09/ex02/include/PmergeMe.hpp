/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:28 by cereais           #+#    #+#             */
/*   Updated: 2025/09/06 19:48:42 by cereais          ###   ########.fr       */
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
	void	printContainer(bool isBefore);

	void	mergeSort();
	void	mergeSortRecursion(int l, int r);
	void	mergeSortedContainers(int l, int m, int r);

	class IllegalInput : public std::exception {
		const char* what() const throw();
	};

private:
	PmergeMe();
	T	_c;
	int	_length;
};

#include "PmergeMe.tpp"

#endif
