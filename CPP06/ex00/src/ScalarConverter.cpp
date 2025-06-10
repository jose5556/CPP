/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:53:11 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 04:57:12 by joseoliv         ###   ########.fr       */
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

#include <stdlib.h>

void	ScalarConverter::convert(const std::string &argument) {
	
	std::string type;

	if (argument.size() == 1 && !isdigit(argument[0]))
		type = "char";
	else if (isInt(argument))
		type = "int";
	else if (isFloat(argument))
		type = "float";
	else if (isDouble(argument))
		type = "double";
	else
		type = "ERROR!";

	std::cout << type << std::endl;
}
