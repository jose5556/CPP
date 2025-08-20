/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:34:42 by joseoliv          #+#    #+#             */
/*   Updated: 2025/08/20 00:29:07 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	
	std::string	line;

	std::ifstream file("data.csv");
	if (!file.is_open())
		throw FileError();
	
	//test if header dataBase is valid
	getline(file, line);
	if (!(line == "date,exchange_rate"))
		throw HeaderError();
	
	while (getline(file, line)) {
			
		dataBaseParser(line);
	}
}

BitcoinExchange::~BitcoinExchange() {
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) : Data() {

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

void	BitcoinExchange::compareInputDB(const Data &data) {

	std::map<std::string, float>::iterator it = _dataBase.lower_bound(data.getDate());

	if (it != _dataBase.end() && it->first == data.getDate()) {
		
		if (data.getValue() < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else
			std::cout << data.getDate() << " => " << data.getValue() << " = " << data.getValue() * it->second << std::endl;
	}
	else {
		
		if (it == _dataBase.begin())
			std::cout << "No earlier date found." << std::endl;
		else {
			
			--it;
			if (data.getValue() < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else
				std::cout << data.getDate() << " => " << data.getValue() << " = " << data.getValue() * it->second << std::endl;
		}
	}
}
