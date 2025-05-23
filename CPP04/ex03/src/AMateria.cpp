/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:36:15 by joseoliv           #+#    #+#             */
/*   Updated: 2025/05/22 19:49:31 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria& copy) {
	
	this->_type = copy._type;
}

AMateria& AMateria::operator=(const AMateria& src) {

	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

std::string const & AMateria::getType() const {

	return (this->_type);
}

void AMateria::use(ICharacter& target) {

	(void)target;
	// Does nothing: base Materia has no specific effect
}
