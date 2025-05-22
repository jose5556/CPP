/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:47:22 by joseoliv           #+#    #+#             */
/*   Updated: 2025/05/22 20:23:22 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

MateriaSource::~MateriaSource() {};

MateriaSource::MateriaSource(const MateriaSource& copy) {

	
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	
}

void MateriaSource::learnMateria(AMateria* materia) {
	
	for (int i = 0; i < 4; i++) {
		if (_inventory)
			_inventory[i] = materia;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	
	if (type == "cure") {

	} else if (type == "ice") {

	} else
		return (NULL);
}
