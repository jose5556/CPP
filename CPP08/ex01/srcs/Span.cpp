/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:39:17 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/29 15:29:05 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span(unsigned int N) {
	
	_size = N;
}

Span::~Span() {}

Span::Span(const Span &copy) {
	
	_size = copy._size;
	_v1 = copy._v1;
}

Span& Span::operator=(const Span& src) {
	
	if (this != &src) {
		_size = src._size;
		_v1 = src._v1;
	}
	return (*this);
}

const char* Span::operationFailed::what() const throw() {
	
	return ("Size exceeded, can't add a new number!");
}

void	Span::addNumber(int number) {
	
	if (_size < _v1.size())
		throw (Span::operationFailed());
	_v1.push_back(number);
}

int		Span::shortestSpan() {
	
	int	result = std::numeric_limits<int>::max();

	if (_v1.empty() || _v1.size() < 2)
		throw (Span::operationFailed());

	std::sort(_v1.begin(), _v1.end());
	std::vector<int>::iterator it = _v1.begin();
	
	while (it + 1 != _v1.end()) {

		if (*(it + 1) - *it < result)
			result = (*(it + 1)) - *it;
		it++;
	}
	return (result);
}

int		Span::longestSpan() {
	
	if (_v1.empty() || _v1.size() < 2)
		throw (Span::operationFailed());

	int	min = *std::min_element(_v1.begin(), _v1.end());
	int	max = *std::max_element(_v1.begin(), _v1.end());

	return (max - min);
}
