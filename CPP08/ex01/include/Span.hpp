/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:39:48 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/24 16:07:08 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

class Span {

public:
	Span(unsigned int N);
	~Span();
	Span(const Span &copy);
	Span& operator=(const Span &src);

	void	addNumber(int number);
	
	template <typename itInput> 
	void	addRangeNumber(itInput begin, itInput end) {
		
		if (_size < _v1.size() + std::distance(begin, end))
			throw (Span::operationFailed());

		_v1.insert(_v1.end(), begin, end);
	}

	int		shortestSpan();
	int		longestSpan();

	class operationFailed : public std::exception {
	public:
		const char* what() const throw();
	};

private:
	Span();
	std::vector<int>	_v1;
	unsigned int		_size;
};