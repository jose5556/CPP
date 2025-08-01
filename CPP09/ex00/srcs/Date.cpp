/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:47:17 by cereais           #+#    #+#             */
/*   Updated: 2025/08/01 23:00:57 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Date.hpp"

Date::Date() {}

Date::Date(std::string d, std::string m, std::string y) {
	
	this->_day = d;
	this->_month = m;
	this->_year = y;
}

Date::~Date() {}

Date::Date(const Date& copy) {
	
	this->_day = copy._day;
	this->_month = copy._month;
	this->_year = copy._year;
}

Date& Date::operator=(const Date& src) {
	
	if (this != &src) {
		this->_day = src._day;
		this->_month = src._month;
		this->_year = src._year;
	}
	return (*this);
}

/* void	Date::validateDate() {
	
	int			date = std::stoi(line);
	static int	month = 0;
	
	if (i == 4) {

		if (date > 2025 || date < 0 || line.length() != 4)
			 return (false);
	} else if ( i == 7) {

		month = std::stoi(line);
		if (line.length() != 2 || date <= 0 || date > 12)
			return (false);
	} else {
		
		if (line.length() != 2 || date <= 0 || date > 31)
			return (false);
		if (month == 2) {
			if (date > 29 || )
		}
		if (month % 2 == 0 && date >= 31) {
			return (false);
		}
	}
	return (true);
} */