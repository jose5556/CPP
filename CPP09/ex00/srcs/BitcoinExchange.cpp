/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:34:42 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/31 17:32:15 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include "../include/bitcoins.h"

BitcoinExchange::BitcoinExchange() {
	
	std::string	line;

	std::ifstream file("data.csv");
	if (!file.is_open())
		argumentError();
	
	//test if header dataBase is valid
	getline(file, line);
	if (!(line == "date,exchange_rate"))
		headerError(line);
	
	while (getline(file, line)) {
			
		dataBaseParser(line);
	}
}

BitcoinExchange::~BitcoinExchange() {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {

	this->_dataBase = copy._dataBase;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
	
	if (this != &src)
		this->_dataBase = src._dataBase;
	return (*this);
}

void	BitcoinExchange::dataBaseParser(std::string line) {
	
	std::string	date;
	std::string	valueStr;
	float		valueNum;
	size_t		pos;

	pos = line.find(",");

	if (pos == std::string::npos) {
		return ;
	}
	
	date = line.substr(0, pos);
	valueStr = line.substr(pos+1);
	valueNum = atof(valueStr.c_str());
	
	this->_dataBase.insert(std::make_pair(date, valueNum));
}
