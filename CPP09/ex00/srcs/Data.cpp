/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:47:17 by cereais           #+#    #+#             */
/*   Updated: 2025/08/04 22:43:36 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

Data::Data() {}

Data::Data(std::string line){

	std::size_t	pos;
	std::string	value;

	pos = line.find(" | ");
	if (pos == std::string::npos) {
		throw InputNumError(line);
	}
	
	_date = line.substr(0, pos);

	if (_date.length() != 10 || _date[4] != '-' || _date[7] != '-')
		throw InputNumError(_date);
		
	validateDate(atoi(_date.substr(0, 4).c_str()),
				atoi(_date.substr(5, 2).c_str()),
				atoi(_date.substr(8, 2).c_str()));

	if (atof(line.substr(pos + 3).c_str()) > INT_MAX)
		throw RangeNumError();
	_value = atof(line.substr(pos + 3).c_str());
}

Data::~Data() {}

Data::Data(const Data& copy) {
	
	this->_date = copy._date;
	this->_value = copy._value;
}

Data& Data::operator=(const Data& src) {
	
	if (this != &src) {
		
		this->_date = src._date;
		this->_value = src._value;
	}
	return (*this);
}

void	Data::validateDate(int y, int m, int d) {

	std::stringstream ss;
	ss << y << "-" << m << "-" << d;
	std::string date = ss.str();

	if (d > 31 || d <= 0 || m > 12 || m <= 0 || y < 0)
		throw InputNumError(date);
	else if (m == 2) {
		
		if (y % 4 == 0 && y % 100 == 0 && y % 400 != 0)
			if (d > 29)
				throw InputNumError(date);
		if (d > 29)
			throw InputNumError(date);
	} else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
		throw InputNumError(date);
}

const char* Data::FileError::what() const throw() {
	return ("Error: could not open file.\n");
}int
const char* Data::HeaderError::what() const throw() {
	return ("Error: inpossible configuration of => ");
}
const char* Data::RangeNumError::what() const throw() {
	return ("Error: too large a number.\n");
}
const char* Data::NegNumError::what() const throw() {
	return ("Error: not a positive number.\n");
}
const char* Data::InputNumError::what() const throw() {
	return message.c_str();
}
int
std::string	Data::getDate() const {
	return (this->_date);
}

float	Data::getValue() const {
	return (this->_value);
}