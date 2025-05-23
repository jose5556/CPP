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
#include "../include/AMateria.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete (_inventory[i]);
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy) {

	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	
	if (&src != this) {
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i]) {
				delete (_inventory[i]);
				_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++) {
			if (src._inventory[i])
				_inventory[i] = src._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
	
	if (!materia)
		return ;
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = materia;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (NULL);
}
