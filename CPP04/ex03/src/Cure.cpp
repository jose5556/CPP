/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:39:18 by joseoliv           #+#    #+#             */
/*   Updated: 2025/05/22 19:44:52 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"

Cure::Cure() {

	this->_type = "cure";
}

Cure::~Cure() {}

Cure::Cure(const Cure& copy) : AMateria() {

	(void)copy;
}

Cure& Cure::operator=(const Cure& src) {

	(void)src;
	return *this;
}

AMateria* Cure::clone() const {
	
	return (new Cure());
}

void Cure::use(ICharacter& target) {

	std::cout << "Cure: \"* heals "
	<< target.getName() << "'s wounds *\"";
}
