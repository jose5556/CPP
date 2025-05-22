/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:39:18 by cereais           #+#    #+#             */
/*   Updated: 2025/05/22 19:41:22 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() {

	this->_type = "cure";
}

Cure::~Cure() {}

Cure::Cure(const Cure& copy) {
}

Cure& Cure::operator=(const Cure& src) {

	(void)src;
	return *this;
}

AMateria* Cure::clone() const {
	
	return (new Cure());
}
