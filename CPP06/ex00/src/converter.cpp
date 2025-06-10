/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 03:50:35 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 06:15:55 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include "../include/converter.h"

void	charTransform(const std::string &argument) {
	
	char	toChar;
	int		toInt;
	float	toFloat;
	double	toDouble;

	toChar = argument[0];
	toInt = static_cast<char>(toChar);
	toFloat = static_cast<char>(toChar);
	toDouble = static_cast<char>(toChar);

	std::cout << "char: " << toChar << std::endl;
	std::cout << "int: " << toInt << std::endl;
	std::cout << "float: " << toFloat << ".0f" << std::endl;
	std::cout << "double: " << toDouble << ".0" << std::endl;
}

void	intTransform(const std::string &argument) {
	
	char	toChar;
	int		toInt;
	float	toFloat;
	double	toDouble;

	toInt = argument[0];
	toChar = static_cast<char>(toInt);
	toFloat = static_cast<char>(toInt);
	toDouble = static_cast<char>(toInt);

	std::cout << "char: " << toChar << std::endl;
	std::cout << "int: " << toInt << std::endl;
	std::cout << "float: " << toFloat << ".0f" << std::endl;
	std::cout << "double: " << toDouble << ".0" << std::endl;
}
