/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arguments.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 00:37:41 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 01:41:38 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Arguments.hpp"

Arguments::Arguments(void) {
}

Arguments::~Arguments(void) {
}

const std::string&	Arguments::getFileName(void) const {
	
	return (this->_filename);
}

std::string	Arguments::getS1(void) {
	
	return (this->_s1);
}

std::string	Arguments::getS2(void) {
	
	return (this->_s2);
}

void	Arguments::setFileName(std::string filename) {
	
	this->_filename = filename;
}

void	Arguments::setS1(std::string s1) {
	
	this->_s1 = s1;
}

void	Arguments::setS2(std::string s2) {
	
	this->_s2 = s2;
}
