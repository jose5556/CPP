/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:39:48 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/23 17:13:30 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>

class Span {

public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span &copy);
	Span& operator=(const Span &src);

	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan();

	class operationFailed : public std::exception {
		
	};

private:
	std::vector<int> v1;
};