/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:39:22 by cereais           #+#    #+#             */
/*   Updated: 2025/05/22 19:41:41 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() {

	this->_type = "ice";
}

Ice::~Ice() {}

Ice::Ice(const Ice& copy) {
}

Ice& Ice::operator=(const Ice& src) {
	
	(void)src;
	return *this;
}

AMateria* Ice::clone() const {
	
	return (new Ice());
}
