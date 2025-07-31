/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:34:42 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/31 16:42:12 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include "../include/bitcoins.h"

BitcoinExchange::BitcoinExchange() {
	
	std::string	line;

	std::ifstream file("data.csv");
	if (!file.is_open())
		argumentError();
	
	//test if header input is valid
	getline(file, line);
	if (!verifyHeader(line))
		headerError(line);
	
	while (getline(file, line)) {
			
		mapParser(this->_dataBase, line);
	}
	
}

BitcoinExchange::~BitcoinExchange() {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
	
}

