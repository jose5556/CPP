/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 03:50:35 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/11 00:59:49 by joseoliv         ###   ########.fr       */
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
	toInt = static_cast<int>(toChar);
	toFloat = static_cast<float>(toChar);
	toDouble = static_cast<double>(toChar);

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

	toInt = atoi(argument.c_str());
	toChar = static_cast<char>(toInt);
	toFloat = static_cast<float>(toInt);
	toDouble = static_cast<double>(toInt);

	//cover chars errors
	if ((toInt <= 32 && toInt >= 0) || (toInt < 256 && toInt > 126))
        std::cout << "char: Non displayable" << std::endl;
    else if (toInt < 0 || toInt > 255)
        std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << toChar << std::endl;

	//int
	std::cout << "int: " << toInt << std::endl;

	//cover float errors
	if (toFloat < 1e5 && toFloat > -1e5)
        std::cout << "float: " << toFloat << ".0f" << std::endl;
    else
        std::cout << "float: " << toFloat << "f" << std::endl;

	//cover double errors
    if (toDouble < 1e5 && toDouble > -1e5)
        std::cout << "double: " << toDouble << ".0" << std::endl;
    else
        std::cout << "double: " << toDouble << std::endl;
}

void floatTransform(const std::string &argument) {

	char	toChar;
	int		toInt;
	float	toFloat;
	double	toDouble;

	toFloat = std::atof(argument.c_str());
	toChar = static_cast<char>(toFloat);
	toInt = static_cast<int>(toFloat);
	toDouble = static_cast<double>(toFloat);

	if ((toInt <= 32 && toInt >= 0) || (toInt < 256 && toInt > 126))
        std::cout << "char: Non displayable" << std::endl;
    else if (toInt < 0 || toInt > 255)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << toChar << std::endl;
    if (toFloat <= static_cast<float>(INT_MAX) && toFloat >= static_cast<float>(INT_MIN))
        std::cout << "int: " << toInt << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (toFloat - floor(toFloat) < 1e-7 && toFloat < 1e5 && toFloat > -1e5)
        std::cout << "float: " << toFloat << ".0f" << std::endl;
    else
        std::cout << "float: " << toFloat << "f" << std::endl;
    if (toDouble - floor(toDouble) < 1e-7 && toDouble < 1e5 && toDouble > -1e5)
        std::cout << "double: " << toDouble << ".0" << std::endl;
    else
        std::cout << "double: " << toDouble << std::endl;
}

void	doubleTransform(const std::string &argument) {

    float toFloat;
    int toInt;
    double toDouble;
    char str_char;

    toDouble = strtod(argument.c_str(), NULL);
    toInt = static_cast<int>(toDouble);
    str_char = static_cast<char>(toInt);
    toFloat = static_cast<float>(toDouble);

    if ((toInt <= 32 && toInt >= 0) || (toInt < 256 && toInt > 126))
        std::cout << "char: Non displayable" << std::endl;
    else if (toInt < 0 || toInt > 255)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: " << str_char << std::endl;
    if (toDouble <= static_cast<double>(INT_MAX) && toDouble >= static_cast<double>(INT_MIN))
        std::cout << "int: " << toInt << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if ((toDouble > static_cast<double>(FLT_MAX) || toDouble < static_cast<double>(-FLT_MAX)) && toDouble != INFINITY && toDouble != -INFINITY)
        std::cout << "float: impossible" << std::endl;
    else if (toFloat - floor(toFloat) < 1e-7 && toFloat < 1e5 && toFloat > -1e5)
        std::cout << "float: " << toFloat << ".0f" << std::endl;
    else
        std::cout << "float: " << toFloat << "f" << std::endl;
    if (toDouble - floor(toDouble) < 1e-7 && toDouble < 1e5 && toDouble > -1e5)
        std::cout << "double: " << toDouble << ".0" << std::endl;
    else
        std::cout << "double: " << toDouble << std::endl;
}
