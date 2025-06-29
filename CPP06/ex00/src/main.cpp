/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:05:03 by cereais           #+#    #+#             */
/*   Updated: 2025/06/11 04:02:53 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include "../include/converter.h"

int main(int argc, char *argv[]) {
	
	system("clear");
	if (argc != 2) {
		std::cerr << ERRORARGUMENTS << std::endl;
		return (1);
	}
	std::string str = argv[1];
	if (str.length() == 0) {
		std::cerr << EMPTYARGUMENTERROR << std::endl;
		return (1);
	}
	ScalarConverter::convert(str);
	return (0);
}
