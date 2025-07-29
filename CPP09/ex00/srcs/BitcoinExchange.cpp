/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:34:42 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/29 19:20:49 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include "../include/bitcoins.h"

BitcoinExchange::BitcoinExchange(char *input) {
	
	std::string	line;
	bool		flag = false;

	std::ifstream file(input);
	if (!file.is_open())
		argumentError();
	
	while (getline(file, line)) {
		
		if (!flag && !verifyHeader(line)) {
			headerError(line);
			flag = true;
		} else {
			mapParser(this->_inputMap, line);
		}
		
	}
}

BitcoinExchange::~BitcoinExchange() {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
	
}

