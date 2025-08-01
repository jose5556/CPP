/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:53:11 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/11 00:52:05 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include "../include/converter.h"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {

	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src) {
	
	(void)src;
	return (*this);
}

void	ScalarConverter::convert(const std::string &argument) {
	
	Type type;

	if (argument.size() == 1 && !isdigit(argument[0]))
		type = CHAR;
	else if (isInt(argument))
		type = INT;
	else if (isFloat(argument))
		type = FLOAT;
	else if (isDouble(argument))
		type = DOUBLE;
	else
		type = ERROR;

	switch (type) {
		
		case CHAR:
			std::cout << "It's a char." << std::endl;
			charTransform(argument);
			break ;

		case INT:
			std::cout << "It's an int." << std::endl;
			intTransform(argument);
			break ;

		case FLOAT:
			std::cout << "It's a float." << std::endl;
			floatTransform(argument);
			break ;

		case DOUBLE:
			std::cout << "It's a double." << std::endl;
			doubleTransform(argument);
			break;

		default:
			std::cout << NOARGUMENTMATCH << std::endl;
	}
}
