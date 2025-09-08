/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 23:12:42 by cereais           #+#    #+#             */
/*   Updated: 2025/09/08 14:59:25 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
PmergeMe<T>::PmergeMe(char **input) {

	_length = 0;
	while (*input) {

		if (!inputParser(*input))
			throw IllegalInput();
		++input;
		_length++;
	}
}

template <typename T>
PmergeMe<T>::~PmergeMe() {}

template <typename T>
PmergeMe<T>::PmergeMe(const PmergeMe& copy) {
	
	this->_c = copy._c;
}

template <typename T>
PmergeMe<T> &PmergeMe<T>::operator=(const PmergeMe& src) {
	
	if (this != &src)
		this->_c = src._c;
	return (*this);
}

template <typename T>
bool	PmergeMe<T>::inputParser(std::string input) {

	std::string::iterator	it;
	int						num;

	for (it = input.begin(); it < input.end(); it++) {

		if (!isdigit(*it)) {
			return (false);
		}
	}

	if (atoi(input.c_str()) > INT_MAX || atoi(input.c_str()) < 0)
		throw IllegalInput();

	num = atoi(input.c_str());
	_c.push_back(num);
	return (true);
}

template <typename T>
void	PmergeMe<T>::printContainer(bool isBefore) {

	if (isBefore)
		std::cout << "Before: ";
	else
		std::cout << "After: ";

	typedef typename T::const_iterator it;
	
	for (it iter = _c.begin(); iter != _c.end(); ++iter) {
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void	PmergeMe<T>::mergeSort() {

	mergeSortRecursion(0, _length - 1);
}

template <typename T>
void	PmergeMe<T>::mergeSortRecursion(int l, int r) {
	
	if (l < r) {
		
		int	m = l + (r - l) / 2;

		mergeSortRecursion(l, m);
		mergeSortRecursion(m + 1, r);
  
		mergeSortedContainers(l, m, r);
	}
}

template <typename T>
void PmergeMe<T>::mergeSortedContainers(int l, int m, int r) {

	int left_length = m - l + 1;
	int right_length = r - m;

	T tempL;
	T tempR;

	int i, j, k;

	for (i = 0; i < left_length; i++)
		tempL.push_back(_c[l + i]);

	for (j = 0; j < right_length; j++)
		tempR.push_back(_c[m + 1 + j]);

	i = 0;
	j = 0;
	k = l;
	while (i < left_length && j < right_length) {
		if (tempL[i] <= tempR[j])
			_c[k++] = tempL[i++];
		else
			_c[k++] = tempR[j++];
	}

	while (i < left_length)
		_c[k++] = tempL[i++];
	while (j < right_length)
		_c[k++] = tempR[j++];
}

template <typename T>
const char* PmergeMe<T>::IllegalInput::what() const throw() {
	return ("ERROR! Invalid input, please make sure you type a valid positive integer.");
}
