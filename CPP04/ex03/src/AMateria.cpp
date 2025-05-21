/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:36:15 by cereais           #+#    #+#             */
/*   Updated: 2025/05/21 18:54:01 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria& copy) {
	
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& src) {

	if (this != &src) {
		
	}
	return (*this);
}

std::string const & AMateria::getType() const {

	return (this->_type);
}

void AMateria::use(ICharacter& target) {

	std::cout << "Ice: \"* shoots an ice bolt at "
	<< target.getName() << " *\"";

	std::cout << "Cure: \"* heals "
	<< target.getName() << "'s wounds *\"";
}
